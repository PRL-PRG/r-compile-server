#? crashes
fun main() {
  () -~> V { reg r0:v1(I), reg r1:v1(I), reg r2:v1(I), reg r3:V, reg r4:V, reg r5:p(v1(I) -), reg r6:p(v1(I) -) |
    r0 = upcast< * -~> v1(I) >(<int 1>);  # nil
    r5 = prom<v1(I) ->{ return <int 1>; };
    r1 = upcast< * -~> v1(I) >(r5);  # nil
    r6 = prom<v1(I) ->{ return <int 1>; };
    r2 = upcast< * -~> v1(I) >(r6);  # not nil
    r3 = downcast< v1(I) -~> V >(r2);
    r4 = downcast< v1(I) -~> V >(r0);
    return r4;
  }
}

fun upcast(`...`) {
  (reg r:*) -~> v1(I) { reg r0:p(v1(I) -), reg r1:v1(I) |
    r0 = r as p(v1(I) -);
    r1 = force r0;
    return r1;
  }
}

fun downcast(`...`) {
  (reg r:v1(I)) -~> V { reg r0:V |
    r0 = r as V;
    return r0;
  }
}
