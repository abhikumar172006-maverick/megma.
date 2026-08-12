male(ben).
male(dustin).
male(root).

female(marry).
female(elektra).
female(max).

parent(ben,dustin).
parent(marry,dustin).
parent(ben,elektra).
parent(marry,elektra).

father(X,Y) :-
    parent(X, Y),
    male(X).

mother(X,Y) :-
    parent(X,Y),
    female(X).

sister(X,Y) :-
    parent(Z,X),
    parent(Z,Y),
    female(X),
    X \=Y.

grandfather(X,Y) :- 
       parent(X, Z),
       parent(Z, Y),
       male(X). 