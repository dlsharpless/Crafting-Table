'''Classes/Objects'''

class Character:
    '''Define Character class'''
    CHARACTER_TYPE = 'hero'
    def __init__(self, name, strength, speed, magic):
        self.__name = name
        self.strength = strength
        self.speed = speed
        self.magic = magic

    # def attack(self, skill):
    #     '''Attack method'''
    #     print(f'{self.name} attacked using {skill}.')

    def update_strength(self, new_strength):
        '''Update strength method'''
        self.strength = new_strength
        print(f'{self.__name} has leveled up. Strength is now {self.strength}.')

    @classmethod
    def display_type(cls, new_type):
        '''Class method that displays the character type'''
        cls.CHARACTER_TYPE = new_type
        print(Character.CHARACTER_TYPE)

    @staticmethod
    def enemy_found():
        '''Static method alert'''
        print('Enemy spotted.')

BRAWLER = Character('Bobby', 80, 50, 10)
# print(BRAWLER.name)
# BRAWLER.attack()
BRAWLER.update_strength(BRAWLER.strength + 5)
# BRAWLER.attack('knuckle barrage')
# Character.display_type('villain')
# Character.enemy_found()
