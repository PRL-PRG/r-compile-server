fun main {
    () --> I { |
        return g();
    }
}

fun g {
    () --> I { |
        return 1;
    }
}
