# TODO: For this and remaining files (ordered alphabetically), move the return type and effects
#   from the end of the body to the end of the parameter. If there's a comment on the line before
#   the closing `}` and return type/effects, move that to before the parameter list as well.
fun main {
    (){ r:p(Is!+)s!;
        r = prom<Is!+>{ 1 };
        force r
    # error: actual is `+`
    }:Is!-
}