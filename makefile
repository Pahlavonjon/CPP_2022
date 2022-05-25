compile:
	g++ -pthread main.cpp Client_Account.cpp Savings_Account.cpp Term_Account.cpp Bank.cpp -o Bank_System
	./Bank_System