#? stdlib
`isGrammarSymbol` <- function (symbol) 
{
    if (typeof(symbol) != "symbol") 
        FALSE
    else switch(as.character(symbol), `{` = , `if` = , `for` = , 
        `while` = , `repeat` = , return = , `next` = , `break` = , 
        `<-` = , `<<-` = TRUE, FALSE)
}
