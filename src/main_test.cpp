//
// Created by 墨林 on 16/5/4.
//

#include <iostream>
#include "Localtime.h"
#include "User.h"


#include "Model/BaseDataStorage.h"
#include "Model/FileDataStorage.h"

using namespace std;

int main() {


	/* data storage demonstration */
	/*BaseDataStorage* db = new FileDataStorage("d:\\database.txt");
	if (!db->prepare()) {
		cerr << "Unable to open the database file" << endl;
		exit(1);
	}*/

	/* write record */
	/*Record rec(-1, 10.0, { 2016, 5, 28, 17, 48, 0 }, "Phone", "IT", /* &merlin */ //nullptr, 10.0);
	//db->write(&rec);

	/* read records */
	/*vector<Record*> records;
	db->fetch_all(records);
	for (const auto p : records) {
		cout << p->get_name() << endl;
	}

	db->finish();

	return 0;
	//system("pause");*/
}