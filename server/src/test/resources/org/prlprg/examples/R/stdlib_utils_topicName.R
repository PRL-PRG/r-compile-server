#? stdlib
`topicName` <- function (type, topic) 
{
    if ((length(type) == 0L) || (length(topic) == 0L)) 
        character(0L)
    else paste(paste(topic, collapse = ","), type, sep = "-")
}
