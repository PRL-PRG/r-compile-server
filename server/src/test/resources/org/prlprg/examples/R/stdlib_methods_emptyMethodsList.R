#? stdlib
`emptyMethodsList` <- function (mlist, thisClass = "ANY", sublist = list()) 
{
    .MlistDefunct("emptyMethodsList()")
    sublist[thisClass] <- list(NULL)
    new("EmptyMethodsList", argument = mlist@argument, sublist = sublist)
}
