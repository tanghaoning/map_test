/*
 * test_c++11unorderedmap.cpp
 *
 *  Created on: 2015年12月20日
 *      Author: thn
 */

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>
#include <sys/time.h>
#include <stdlib.h>
#include <unordered_map>

using namespace std;

typedef long time_t;

double getCurTimeStamp()
{
    double timestamp = 0.0;
    struct timeval ctime;
    gettimeofday(&ctime, NULL);  // ????¦Ë?? /usr/include/sys/time.h
    timestamp = ctime.tv_sec + ctime.tv_usec / 1000000.0;
    return timestamp;
}

time_t getCurrentTime()
{
	return (time_t)( 1000 * getCurTimeStamp() );
}

int main(){

	string base = "maptest";

	time_t create_start = getCurrentTime();
//	cout<< "create start time: "  << create_start <<endl;

	unordered_map<int,int> map;
//	un_map.reserve(10000000);

	for(int i = 0 ; i < 5000000 ; ++i){
	//	stringstream ss;
	//	ss << i;
	//	string tmp = ss.str();
	//	tmp += base;
		map[i] = i;
	}


	time_t create_end = getCurrentTime();
//	cout<<"create end : " << create_end <<endl;

	cout<< "create time elasped : " << create_end - create_start <<endl;


	time_t search_start = getCurrentTime();
//	cout<< "search start time: " << search_start <<endl;


	for(int i = 0 ; i < 5000000 ; ++i){

//		srand( (unsigned)time(NULL) ); //generate seed
//		int k = (int)( ((double)rand() / (RAND_MAX + 1.0)) * 1000000 ) + 1;

	//	stringstream ss;
	//	ss << k ;
	//	string tmp = ss.str();
	//	tmp += base;
	//	if( un_map.find(k) == un_map.end() ){
	//		cout<< "search failed"<<endl;
	//	}
		int t;
		t = map[5000000-i-1];
	}


	time_t search_end = getCurrentTime();
//	cout<< "search end time: " <<search_end <<endl;

	cout<< "search time elasped : " << search_end - search_start << endl;


	return 0;

}



