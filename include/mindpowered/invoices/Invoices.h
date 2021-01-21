#pragma once
/*!
 * Copyright Mind Powered Corporation 2020
 * 
 * https://mindpowered.dev/
 */

#include <maglev/MagLev.h>
#include <maglev/MagLevCpp.h>
#include <maglev/CppCallbackPtr.h>
#include <maglev/CppAny.h>
#include <invoices/Invoices.h>
#include <haxecpp/haxe_thread.h>
#include <string>
#include <map>

void __boot_maglev();
void __boot_invoices();

/*!
 * An Library for Creating Invoices
 */
class Invoices {
public:
	Invoices()
	{
		run_haxe([](){
			__boot_maglev();
			__boot_invoices();
			::maglev::MagLev m0 = ::maglev::MagLev_obj::getInstance("default");
			auto o = new ::invoices::Invoices_obj();
			o->__construct(m0);
		});
	}
	~Invoices()
	{
	}

	/*!
	 * Create a new invoice
	 * @param clientId 
	 * @param invoiceNumber 
	 * @param date 
	 * @param dueDate 
	 * @param notes 
	 * @return {std::string} New invoice id
	*/
	std::string CreateInvoice(std::string clientId, std::string invoiceNumber, std::string date, std::string dueDate, std::string notes)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,clientId,invoiceNumber,date,dueDate,notes](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(clientId);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setStdString(invoiceNumber);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setStdString(date);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setStdString(dueDate);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setStdString(notes);
			myargs.push_back(param4);
			bus->call("Invoices.CreateInvoice", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getStdString();
	}

	/*!
	 * Delete an invoice
	 * @param invoiceId 
	*/
	void DeleteInvoice(std::string invoiceId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,invoiceId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(invoiceId);
			myargs.push_back(param0);
			bus->call("Invoices.DeleteInvoice", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * 
	 * @param invoiceId 
	 * @param clientId 
	 * @param invoiceNumber 
	 * @param date 
	 * @param dueDate 
	 * @param notes 
	*/
	void ChangeInvoice(std::string invoiceId, std::string clientId, std::string invoiceNumber, std::string date, std::string dueDate, std::string notes)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,invoiceId,clientId,invoiceNumber,date,dueDate,notes](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(invoiceId);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setStdString(clientId);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setStdString(invoiceNumber);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setStdString(date);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setStdString(dueDate);
			myargs.push_back(param4);
			::maglev::CppAny param5 = new ::maglev::CppAny_obj();
			param5->setStdString(notes);
			myargs.push_back(param5);
			bus->call("Invoices.ChangeInvoice", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * 
	 * @param invoiceId 
	 * @return {std::map<std::string,::maglev::CppAny>} 
	*/
	std::map<std::string,::maglev::CppAny> GetInvoiceSummary(std::string invoiceId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,invoiceId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(invoiceId);
			myargs.push_back(param0);
			bus->call("Invoices.GetInvoiceSummary", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::map<std::string,::maglev::CppAny> retmap;
		return retmap;
	}

	/*!
	 * 
	 * @param invoiceId 
	 * @return {std::vector<::maglev::CppAny>} Line items for invoice
	*/
	std::vector<::maglev::CppAny> GetLineItems(std::string invoiceId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,invoiceId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(invoiceId);
			myargs.push_back(param0);
			bus->call("Invoices.GetLineItems", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * 
	 * @param invoiceId 
	 * @param accountId 
	 * @param description 
	 * @param taxes 
	 * @param quantity 
	 * @param price 
	 * @return {double} lineNumber
	*/
	double AddLineItem(std::string invoiceId, std::string accountId, std::string description, std::map<std::string,::maglev::CppAny> taxes, double quantity, double price)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,invoiceId,accountId,description,taxes,quantity,price](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(invoiceId);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setStdString(accountId);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setStdString(description);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->makeMap();
			for (auto const& item : taxes)
			{
				param3->setMapValue(item.first, item.second);
			}
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setDouble(quantity);
			myargs.push_back(param4);
			::maglev::CppAny param5 = new ::maglev::CppAny_obj();
			param5->setDouble(price);
			myargs.push_back(param5);
			bus->call("Invoices.AddLineItem", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getDouble();
	}

	/*!
	 * 
	 * @param invoiceId 
	 * @param lineNumber 
	 * @param accountId 
	 * @param description 
	 * @param taxes 
	 * @param quantity 
	 * @param price 
	*/
	void ChangeLineItem(std::string invoiceId, double lineNumber, std::string accountId, std::string description, std::map<std::string,::maglev::CppAny> taxes, double quantity, double price)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,invoiceId,lineNumber,accountId,description,taxes,quantity,price](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(invoiceId);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(lineNumber);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setStdString(accountId);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setStdString(description);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->makeMap();
			for (auto const& item : taxes)
			{
				param4->setMapValue(item.first, item.second);
			}
			myargs.push_back(param4);
			::maglev::CppAny param5 = new ::maglev::CppAny_obj();
			param5->setDouble(quantity);
			myargs.push_back(param5);
			::maglev::CppAny param6 = new ::maglev::CppAny_obj();
			param6->setDouble(price);
			myargs.push_back(param6);
			bus->call("Invoices.ChangeLineItem", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * 
	 * @param invoiceId 
	 * @param lineNumber 
	*/
	void RemoveLineItem(std::string invoiceId, double lineNumber)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,invoiceId,lineNumber](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(invoiceId);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(lineNumber);
			myargs.push_back(param1);
			bus->call("Invoices.RemoveLineItem", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * 
	 * @param clientId 
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> GetInvoicesByClient(std::string clientId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,clientId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(clientId);
			myargs.push_back(param0);
			bus->call("Invoices.GetInvoicesByClient", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * 
	 * @param page 
	 * @param perpage 
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> GetAllInvoices(double page, double perpage)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,page,perpage](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(page);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(perpage);
			myargs.push_back(param1);
			bus->call("Invoices.GetAllInvoices", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Returns the Invoice ID or null
	 * @param invoiceNumber 
	 * @return {::maglev::CppAny} 
	*/
	::maglev::CppAny FindInvoiceByNumber(std::string invoiceNumber)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,invoiceNumber](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(invoiceNumber);
			myargs.push_back(param0);
			bus->call("Invoices.FindInvoiceByNumber", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret;
	}

};

