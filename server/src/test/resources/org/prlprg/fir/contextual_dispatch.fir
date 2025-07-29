fun main {
    () --> v(I)f { reg r_shared:*, reg r1_shared:*, reg r_owned:v(I)o, reg r1_owned:v(I)o, reg r1:I, reg r2:I, reg r3:I, reg r4:I, reg r5:v(I)o |
        r_shared = 42;
        r1_shared = [1, 2, 3];
        r_owned = [4, 5];
        r1_owned = [6, 7];
        r1 = contextual<*,* --> I>(r_shared, r_shared);
        r2 = contextual<*,* --> I>(r_shared, r1_shared);
        r3 = contextual<v(I)o,* --> I>(use r_owned, r_shared);
        r4 = contextual<v(I)o,* --> I>(use r1_owned, r1_shared);
        r5 = [r1, r2, r3, r4];
        return r5;
    }
}

fun contextual {
    (reg r:*, reg r1:*) --> I { |
        return 1;
    }
    (reg r:*, reg r1:v(I)) --> I { |
        return 2;
    }
    (reg r:v(I)o, reg r1:*) --> I { |
        return 3;
    }
    (reg r:v(I)o, reg r1:v(I)) --> I { |
        return 4;
    }
}

fun print {
    (reg r:*) --> V { | ...; }
}