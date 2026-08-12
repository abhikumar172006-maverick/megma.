concatenate([], L, L).
concatenate([H|T], L, [H|R])  :-
    concatenate(T, L, R).