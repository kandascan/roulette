#include "stdafx.h"
#include "stawka.h"

stawka::stawka()
{
}
stawka::~stawka()
{

}

void stawka::przypsz_kase(int siano)
{
	kasa = siano;
}
int stawka::pokaz_kasa()
{
	 return kasa;
}