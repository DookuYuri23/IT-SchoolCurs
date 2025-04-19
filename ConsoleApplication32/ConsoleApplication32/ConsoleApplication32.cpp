#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

class Car {
public:
    string registration_number;
    string cnp;
    float amount_collected;
    float driver_rating;
    int birth_year;

    Car(string reg_num, string cnp, float amount, float rating)
        : registration_number(reg_num), cnp(cnp), amount_collected(amount), driver_rating(rating) {
        birth_year = (cnp[0] == '1' || cnp[0] == '2' || cnp[0] == '5' || cnp[0] == '6')
            ? 1900 + stoi(cnp.substr(1, 2))
            : 2000 + stoi(cnp.substr(1, 2));
    }
};

class HashMap {
private:
    vector<vector<Car>> buckets;

public:
    HashMap(int bucket_count) : buckets(bucket_count) {}

    int hash(const string& registration_number) {
        string county_code = registration_number.substr(0, registration_number.length() - 3);
        int ascii_sum = 0;
        for (char c : county_code) {
            ascii_sum += static_cast<int>(c);
        }
        return ascii_sum % buckets.size();
    }

    void insert(const Car& car) {
        int index = hash(car.registration_number);
        buckets[index].push_back(car);
        sort(buckets[index].begin(), buckets[index].end(), [](const Car& a, const Car& b) {
            return a.birth_year < b.birth_year;
            });
    }

    vector<Car> get_all_cars() {
        vector<Car> result;
        for (const auto& bucket : buckets) {
            result.insert(result.end(), bucket.begin(), bucket.end());
        }
        return result;
    }

    pair<vector<Car>, int> find_by_county(const string& county_code) {
        vector<Car> result;
        int steps = 0;
        for (const auto& bucket : buckets) {
            for (const Car& car : bucket) {
                if (car.registration_number.substr(0, county_code.length()) == county_code) {
                    result.push_back(car);
                }
                steps++;
            }
            if (!result.empty()) {
                break;
            }
        }
        return { result, steps };
    }

    void compare_counties(const string& county1, const string& county2) {
        for (const string& county : { county1, county2 }) {
            int total_cars = 0;
            float total_amount = 0;
            float total_rating = 0;

            for (const auto& bucket : buckets) {
                for (const Car& car : bucket) {
                    if (car.registration_number.substr(0, county.length()) == county) {
                        total_cars++;
                        total_amount += car.amount_collected;
                        total_rating += car.driver_rating;
                    }
                }
            }

            float avg_amount = total_cars > 0 ? total_amount / total_cars : 0;
            float avg_rating = total_cars > 0 ? total_rating / total_cars : 0;
            cout << county << " " << total_cars << " " << fixed << setprecision(2)
                << total_amount << " " << avg_amount << " " << avg_rating << endl;
        }
    }

    vector<Car> find_low_rated_cars(const string& county_code, float rating_threshold) {
        vector<Car> result;
        for (const auto& bucket : buckets) {
            for (const Car& car : bucket) {
                if (car.registration_number.substr(0, county_code.length()) == county_code &&
                    car.driver_rating < rating_threshold) {
                    result.push_back(car);
                }
            }
        }
        sort(result.begin(), result.end(), [](const Car& a, const Car& b) {
            return a.driver_rating < b.driver_rating;
            });
        return result;
    }
};

int main() {
    int num_cars;
    int num_buckets;

    cin >> num_cars >> num_buckets;
    HashMap car_map(num_buckets);

    for (int i = 0; i < num_cars; ++i) {
        string reg_number, cnp;
        float amount, rating;
        cin >> reg_number >> cnp >> amount >> rating;
        car_map.insert(Car(reg_number, cnp, amount, rating));
    }

    int command;
    cin >> command;

    if (command == 1) {
        for (const Car& car : car_map.get_all_cars()) {
            cout << car.registration_number << endl;
        }
    }
    else if (command == 2) {
        string county_code;
        cin >> county_code;
        auto [cars, steps;] = car_map.find_by_county(county_code);
        for (const Car& car : cars) {
            cout << car.registration_number << " " << car.cnp << " "
                << fixed << setprecision(2) << car.amount_collected << " "
                << car.driver_rating << endl;
        }
        cout << steps << endl;
    }
    else if (command == 3) {
        string county1, county2;
        cin >> county1 >> county2;
        car_map.compare_counties(county1, county2);
    }
    else if (command == 4) {
        string county_code;
        float rating_threshold;
        cin >> county_code >> rating_threshold;
        vector<Car> low_rated_cars = car_map.find_low_rated_cars(county_code, rating_threshold);
        for (const Car& car : low_rated_cars) {
            cout << car.registration_number << " " << fixed << setprecision(2) << car.driver_rating << endl;
        }
    }

    return 0;
}
