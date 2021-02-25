%-------------------------------------------------------------------------------
% SWISH Online Prolog Interpreter
% https://swish.swi-prolog.org/
%
% Learn Prolog Now!
% https://lpn.swi-prolog.org/lpnpage.php?pageid=online
%
% Tutorialspoint
% https://www.tutorialspoint.com/prolog/index.htm
%
%-------------------------------------------------------------------------------


%-------------------------------------------------------------------------------
% Knowledge bases:
% - A collection of facts and rules
%-------------------------------------------------------------------------------

%-------------------------------------------------------------------------------
% Facts: 
% - Properties of objects
% - Explicit relationship between objects
% - Facts are unconditionally true
%-------------------------------------------------------------------------------

female(pam).
female(liz).
female(pat).
female(ann).
male(jim).
male(bob).
male(tom).
male(peter).
parent(pam,bob).
parent(tom,bob).
parent(tom,liz).
parent(bob,ann).
parent(bob,pat).
parent(pat,jim).
parent(bob,peter).
parent(peter,jim).


%-------------------------------------------------------------------------------
% Rules:
% - Implicit relationship between objects
% - When one associated condition is true, then the predicate is also true
% - Used to deduce facts that are conditionally true based on other facts
%-------------------------------------------------------------------------------

mother(X,Y):- parent(X,Y),female(X).
father(X,Y):- parent(X,Y),male(X).
haschild(X):- parent(X,_).
sister(X,Y):- parent(Z,X),parent(Z,Y),female(X),X\==Y.
brother(X,Y):-parent(Z,X),parent(Z,Y),male(X),X\==Y.

% TODO: Add the following rules:
% 1. grandparent(X,Y)
% 2. grandfather(X,Y)
% 3. grandmother(X,Y)
% 4. uncle(X,Y)
% 5. aunt(X,Y)
% 6. couple(X,Y)
% 7. husband(X,Y)
% 8. wife(X,Y)
% 9. predecessor(X,Y)
% 10. descendant(X,Y)

/** <examples>

?- parent(X,jim).
?- mother(X,Y).
?- haschild(X).
?- sister(X,Y).
?- uncle(X,Y).
?- grandparent(X,Y).
?- wife(X,Y).
?- predecessor(peter,X).
?- predecessor(bob,X).

*/