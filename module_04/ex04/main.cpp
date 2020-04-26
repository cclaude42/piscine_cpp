/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 13:28:25 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/26 15:27:52 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "Asteroid.hpp"
#include "Comet.hpp"
#include "MiningBarge.hpp"

int main()
{
	MiningBarge* barge = new MiningBarge();

	IMiningLaser* deep = new DeepCoreMiner();
	IMiningLaser* strip = new StripMiner();

	barge->equip(deep);
	barge->equip(strip);

	IAsteroid* ast = new Asteroid();
	IAsteroid* com = new Comet();

	barge->mine(ast);
	barge->mine(com);

	delete ast;
	delete com;
	delete deep;
	delete strip;
	delete barge;

	return 0;
}
