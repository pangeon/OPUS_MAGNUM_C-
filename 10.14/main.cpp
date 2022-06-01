#include <iostream>
#include <vector>
#include <iomanip>
#include <time.h>

using namespace std;

using Row = vector<string>;
using Floor = vector<Row>;
using Audience = vector<Floor>;

const string empty_seat("Ticket not sold");

constexpr int floors_amount{2};
constexpr int rows_amount{15};
constexpr int seats_in_row_amount{25};

Audience cinema_city
(
    floors_amount, 
    Floor
    (
        rows_amount, 
        Row
        (
            seats_in_row_amount, 
            empty_seat
        )
    )
);
int random(int range, int start_number = 0) {
    int rand_number = (rand() % range) + start_number;
    return rand_number;
}
void show_reserved_seats(vector<vector<vector<string>>> audience) 
{
    for(int floor_num = 0; floor_num < audience.size(); ++floor_num) 
    {
        cout << "Floor number " << floor_num << endl;
        for(auto row: audience[floor_num])
        {
            for(auto seat: row)
            {
                (seat == empty_seat) ? cout << "|." : cout << "|X";
            }
            cout << "|" << endl;
        }
        cout << endl;
    }
}

void view_people_info_audience(vector<vector<vector<string>>> audience)
{
    int viewers_number{0};
    cout << "Today in the cinema there are:" << endl;

    for(int floor_num = 0; floor_num < audience.size(); ++floor_num) 
    {
        for(int row_num = 0; row_num < audience[floor_num].size(); ++row_num)
        {
            for(int seat_num = 0; seat_num < audience[floor_num][row_num].size(); ++seat_num)
            {
                if(audience[floor_num][row_num][seat_num] != empty_seat) 
                {
                    cout << "Mr/s. " << setw(35)
                    << audience[floor_num][row_num][seat_num]
                    << " - floor: " << floor_num << ", row: " << row_num
                    << ", seat: " << seat_num << endl;
                    ++viewers_number;
                }
            }
        }
    }
    cout << "Total amount of viewers: " << viewers_number << endl;
}

int main() 
{
    srand(time(NULL));
    cinema_city[random(floors_amount)][random(rows_amount)][random(seats_in_row_amount)] = "Agnieszka Lasota";
    cinema_city[random(floors_amount)][random(rows_amount)][random(seats_in_row_amount)] = "Radoslaw Ignasiak";
    cinema_city[random(floors_amount)][random(rows_amount)][random(seats_in_row_amount)] = "Adam Wolniewicz";
    cinema_city[random(floors_amount)][random(rows_amount)][random(seats_in_row_amount)] = "Anna Just";
    cinema_city[random(floors_amount)][random(rows_amount)][random(seats_in_row_amount)] = "Aneta Spiewak";
    cinema_city[random(floors_amount)][random(rows_amount)][random(seats_in_row_amount)] = "Malgorzata Wolniewicz";
    cinema_city[random(floors_amount)][random(rows_amount)][random(seats_in_row_amount)] = "Jakub Pacyniak";
    cinema_city[random(floors_amount)][random(rows_amount)][random(seats_in_row_amount)] = "Aleksandra Bugajak";
    cinema_city[random(floors_amount)][random(rows_amount)][random(seats_in_row_amount)] = "Aleksandra Wolniewicz (Chwalinska)";

    cout << "Reserved places in Cinema City" << endl;
    show_reserved_seats(cinema_city);

    cout << "\nPeople names with reservations" << endl;
    view_people_info_audience(cinema_city);
}