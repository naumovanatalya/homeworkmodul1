﻿#pragma once
#include<iostream>
#include<exception>
class bad_range : public std::exception
{
public:
	virtual const char* what() const noexcept override;
};

