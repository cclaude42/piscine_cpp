/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 11:50:40 by cclaude           #+#    #+#             */
/*   Updated: 2020/10/15 18:41:42 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

class Nook : public Enemy {
public:
	Nook(void) : Enemy(150, "Nook") { std::cout << "Welcome to Nook Corner !" << std::endl; }
	Nook(const Nook & src) : Enemy(src) { std::cout << "Welcome to Nook Corner !" << std::endl; }
	virtual ~Nook(void) { std::cout << "You are worthy..." << std::endl; }
	Nook & operator=(const Nook & src) { (void)src; return (*this); }
};

class Shovel : public AWeapon {
public:
	Shovel(void) : AWeapon("Shovel", 2, 100) {}
	Shovel(const Shovel & src) : AWeapon(src) {}
	virtual ~Shovel(void) {}
	Shovel & operator=(const Shovel & src) { (void)src; return (*this); }
	void	attack(void) const { std::cout << "* CLANG! *" << std::endl; }
};

int	main(void)
{
	Character* me = new Character("Isabelle");
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* sh = new Shovel();

	std::cout << *me;
	me->equip(pr);
	std::cout << *me;

	std::cout << std::endl << "==================" << std::endl << std::endl;

	Enemy* a = new RadScorpion();

	me->attack(a);
	std::cout << *me;
	me->attack(a);
	me->attack(a);
	me->attack(a);

	std::cout << std::endl << "==================" << std::endl << std::endl;

	std::cout << *me;
	me->equip(pf);
	std::cout << *me;

	std::cout << std::endl << "==================" << std::endl << std::endl;

	Enemy* b = new SuperMutant();

	me->attack(b);
	me->attack(b);
	me->attack(b);
	me->attack(b);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->attack(b);
	me->attack(b);

	std::cout << std::endl << "==================" << std::endl << std::endl;

	std::cout << *me;
	me->equip(sh);
	std::cout << *me;

	std::cout << std::endl << "==================" << std::endl << std::endl;

	Enemy* c = new Nook();

	me->attack(c);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();

	std::cout << std::endl << "==================" << std::endl << std::endl;

	std::cout << *me;

	delete sh;
	delete pf;
	delete pr;
	delete me;
	return 0;
}
//
// int	main(void)
// {
// 	PlasmaRifle	plas;
//
// 	std::cout << plas.getName() << std::endl;
// 	std::cout << plas.getAPCost() << std::endl;
// 	std::cout << plas.getDamage() << std::endl;
// 	plas.attack();
//
// 	PowerFist	pow;
//
// 	std::cout << pow.getName() << std::endl;
// 	std::cout << pow.getAPCost() << std::endl;
// 	std::cout << pow.getDamage() << std::endl;
// 	pow.attack();
//
// 	SuperMutant	mutant;
//
// 	std::cout << mutant.getHP() << std::endl;
// 	std::cout << mutant.getType() << std::endl;
// 	mutant.takeDamage(10);
// 	std::cout << mutant.getHP() << std::endl;
//
// 	RadScorpion	rad;
//
// 	std::cout << rad.getHP() << std::endl;
// 	std::cout << rad.getType() << std::endl;
// 	rad.takeDamage(10);
// 	std::cout << rad.getHP() << std::endl;
//
// 	return 0;
// }
