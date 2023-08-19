#include <iostream>
#include <random>
#include <vector>
#include <string>

int main() {


	std::random_device rd;



	std::mt19937 gen(rd());


	std::vector<std::string> quotes = {


		"I learned that courage was not the absence of fear, but the triumph over it. The brave man is not he who does not feel afraid, but he who conquers that fear. - Nelson Mandela - ",

		"If you believe it will work, you'll see opportunities. If you believe it won't, you will see obstacles. - Wayne Dyer - ",

		"Believe you can and you're halfway there. - Theodore Roosevelt - ",

		"Learn the rules like a pro, so you can break them like an artist. - Pablo Picasso -  ",

		"Do one thing every day that scares you. - Eleanor Roosevelt - ",

		"I didn't get there by wishing for it or hoping for it, but by working for it. - Estée Lauder - ",

		"If you can dream it, you can do it. - Walt Disney - ",

		"Even if you are on the right track, you'll get run over if you just sit there. - Will Rogers - ",

		"Success is not final, failure is not fatal: it is the courage to continue that counts. - Winston Churchill - ",

		"Strength does not come from physical capacity. It comes from an indomitable will. - Mahatma Gandhi - ",

		"Earn your leadership every day. - Michael Jordan - ",

		"It's not just about being better. It's about being different. You need to give people a reason to choose your business. - Tom Abbott - ",

		"The leader has to be practical and a realist yet must talk the language of the visionary and the idealist. - Eric Hoffer - ",

		"Leadership and learning are indispensable to each other. - John F. Kennedy - ",

		"The pessimist complains about the wind. The optimist expects it to change. The leader adjusts the sails. - John Maxwell - ",

		"Alone we can do so little; together we can do so much. - Hellen Keller - ",

		"The way a team plays as a whole determines its success. You may have the greatest bunch of individual stars in the world, but if they don't play together, the club won't be worth a dime.- Babe Ruth - ",

		"It is amazing what you can accomplish if you do not care who gets the credit. - Harry Truman - ",

		"I can do things you cannot, you can do things I cannot: together we can do great things. - Mother Teresa - ",

		"It is the long history of humankind (and animal kind, too) that those who learned to collaborate and improvise most effectively have prevailed. - Charles Darwin - ",

		"The ones who are crazy enough to think they can change the world are the ones who do. - Steve Jobs - ",

		"Try to be a rainbow in someone's cloud. - Maya Angelou - ",

		"Follow your bliss and the universe will open doors where there were only walls. - Joseph Campbell - ",

		"A year from now you may wish you had started today. - Karen Lamb - ",

		"Don't count the days, make the days count. - Muhammad Ali - ",

		"Strive not to be a success, but rather to be of value. - Albert Einstein - ",

		"Build your own dreams, or someone else will hire you to build theirs. - Farrah Gray - ",

		"It is important to look at death because it is a part of life. It is a sad thing, melancholy but romantic at the same time. It is the end of a cycle - everything has to end. The cycle of life is positive because it gives room for new things. - Alexander McQueen - ",

		"You can’t use up creativity. The more you use, the more you have. - Maya Angelou - ",

		"I would rather die of passion than of boredom. - Vincent van Gogh - ",

		"Nothing is impossible, the word itself says “I’m possible! - Audrey Hepburn - ",

		"If you look at what you have in life, you’ll always have more. If you look at what you don’t have in life, you’ll never have enough. - Oprah Winfrey - ",

		"Nothing lasts forever. Not even your troubles. - Arnold H Glasgow - ",

		"The only place you find success before work is in the dictionary. - May V. Smith - ",

		"Hope never abandons you, you abandon it. - George Weinberg - ",

		"Just decide; what's it's gonna be, who you're gonna be and how you're gonna do it, and then from that point, the universe will get out of your way. - Will Smith - ",

		"Innovation distinguishes between a leader and a follower. - Steve Jobs - ",

		"Those who dare to fail miserably can achieve greatly. - John F. Kennedy - ",

		"I’m a success today because I had a friend who believed in me and I didn’t have the heart to let him down. - Abraham Lincoln - ",

		"It is our choices, that show what we truly are, far more than our abilities. - J.K. Rowling - ",

		"Go until you fail, then keep going. - Jason Feifer - ",

		"A person who never made a mistake never tried anything new. - Albert Einstein - ",

		"Don't let the noise of others' opinions drown out your own inner voice. - Steve Jobs - ",

		"Age is something that doesn't matter, unless you are a cheese. - Billie Burke - ",

		"There is only one way to avoid criticism: Do nothing, say nothing, and be nothing. - Aristotle - ",

		"If you obey all the rules, you miss all the fun. - Katherine Hepburn - ",

		"All our dreams can come true, if we have the courage to pursue them. - Walt Disney - ",

		"Tough times never last, but tough people do. - Robert H. Shuller - ",

		"Remember why you started. - Unknown - ",

		"Be so good they can't ignore you. - Steve Martin - ",

		"Someone is sitting in the shade today because someone planted a tree a long time ago. - Warren Buffett - ",

	};

	std::uniform_int_distribution<int> distribution(0, quotes.size() - 1);



	int randomIndex = distribution(gen);


	std::cout << "Random quote: " << quotes[randomIndex] << std::endl;

	return 0;

}