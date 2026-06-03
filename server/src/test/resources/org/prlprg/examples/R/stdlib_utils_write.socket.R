#? stdlib
`write.socket` <- function (socket, string) 
invisible(.Call(C_sockwrite, socket$socket, string))
