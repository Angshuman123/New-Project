l_position = [' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ']
player1 = 1
player2 = 2
current_p = 1
position = 1


def start_game():
    global current_p
    global position
    current_p = player1
    display_board_position(l_position)
    if not l_position:
        pass
    else:
        while 1 <= position <= 9:
            if win_condition():
                if current_p == player1:
                    print 'Game over!!. The winner is player ', player2
                    restart()
                    break
                else:
                    print 'Game over!! The winner is player ', player1
                    restart()
                    break
            else:
                if current_p == player1:
                    print 'current_p', current_p
                    position_of_player(current_p)
                    current_p = player2
                else:
                    print 'current_p', current_p
                    position_of_player(current_p)
                    current_p = player1
        else:
            print 'The game is draw'


def win_condition():
    global l_position
    if l_position[1] == l_position[2] and l_position[2] == l_position[3] and l_position[1] != ' ':
        return True
    elif l_position[4] == l_position[5] and l_position[5] == l_position[6] and l_position[4] != ' ':
        return True
    elif l_position[7] == l_position[8] and l_position[8] == l_position[9] and l_position[7] != ' ':
        return True
    elif l_position[1] == l_position[4] and l_position[4] == l_position[7] and l_position[1] != ' ':
        return True
    elif l_position[2] == l_position[5] and l_position[5] == l_position[8] and l_position[2] != ' ':
        return True
    elif l_position[3] == l_position[6] and l_position[6] == l_position[9] and l_position[3] != ' ':
        return True
    elif l_position[1] == l_position[5] and l_position[5] == l_position[9] and l_position[1] != ' ':
        return True
    elif l_position[3] == l_position[5] and l_position[5] == l_position[7] and l_position[3] != ' ':
        return True


def position_of_player(curr_p):
    print 'Enter your position: (1 - 9)'
    l_pos = int(raw_input())
    if l_pos < 1 or l_pos > 9:
        print 'Invalid Position. Enter again'
        position_of_player(curr_p)
    else:
        put_symbol(l_pos, curr_p)


def put_symbol(pos, player):
    global l_position
    global position
    position = pos
    symbol = raw_input('Enter X for player 1 or O for player 2').upper()
    if player == player1 and symbol != 'X':
        print 'Invalid Symbol'
        position_of_player(player)
    elif player == player2 and symbol != 'O':
        print 'Invalid Symbol'
        position_of_player(player)
    else:
        while symbol == 'X' or symbol == 'O':
            if l_position[pos] == ' ':
                l_position[pos] = symbol
                display_board_position(l_position)
                break
            else:
                print 'Position is already filled. Try entering a new position...'
                position_of_player(player)
                continue
        else:
            print 'Invalid symbol'


def display_board_position(l_pos):
    print '        |        |        '
    print '  ', l_pos[1], '   |   ', l_pos[2], '  |  ', l_pos[3], '      '
    print '        |        |        '
    print '-----------------------'
    print '        |        |        '
    print '  ', l_pos[4], '   |    ', l_pos[5], ' |  ', l_pos[6], '      '
    print '        |        |        '
    print '-----------------------'
    print '        |        |        '
    print '  ', l_pos[7], '   |   ', l_pos[8], '  |   ', l_pos[9], '     '
    print '        |        |        '


def restart():
    global l_position
    global current_p
    global position

    print 'Do you want to restart the game?????????? y/n'
    if raw_input() == 'y':
        l_position = [' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ']
        current_p = 1
        position = 1
        start_game()


start_game()
