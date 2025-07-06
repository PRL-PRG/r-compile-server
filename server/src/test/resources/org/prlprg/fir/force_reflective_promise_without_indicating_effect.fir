# TODO: For this and remaining files (ordered lexicographically), move the return type and effects
#   from the end of the body to the end of the parameter. If there's a comment on the line before
#   the closing `}` and return type/effects, move that to before the parameter list as well.
# TODO: Prepend `return` before each last statement, and add a semicolon after each last statement.
#   EXCEPT if the statement is "...", don't prepend `return`, only add the semicolon.
fun main {
    (){ r:p(Is!+)s!;
        r = prom<Is!+>{ 1 };
        force r
    # error: actual is `+`
    }:Is!-
}