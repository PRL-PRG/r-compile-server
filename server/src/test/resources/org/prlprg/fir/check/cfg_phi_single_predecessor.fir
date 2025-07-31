fun main {
    () --> I { |
        br bb1;
        # cfg-error: Block with < 2 predecessors cannot have phi parameters
        bb1(phi r1:I):
            return r1;
    }
}