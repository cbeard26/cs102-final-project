// Outlining: 

/*
class -> game
      -> piece
        -> pawn
        -> knight
        -> rook
        -> bishop
        -> king
        -> queen

game class will contain all pieces 
 - in charge of displaying and keeping track of pieces

specific pieces will be subclasses / child classes of piece
 - piece (outer class) will know current position on board and piece color
 - specific sub-piece will know movable locations

my current plan is to take input as number/letter coordinates,
as chess boards are typically organized

Plan of action:
1. implement board class and turn system (no player objects b/c turns alternate pretty simply)

2. implement each piece's movement, making sure that "movable space" lists are populated correctly

3. implement piece interaction i.e. taking other players pieces (save that info to display, possibly?)

4. implement special situations – castling, pawn->queen, win conditions etc.






*/