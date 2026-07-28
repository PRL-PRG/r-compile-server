#? crashes
#? [fir2c.eval]noEval
fun main() {
  () -~> V {
    r0: v1(I) = upcast< * -~> v1(I) >(<int 1>);
    # nil
    r5: p(v1(I) -) = prom<v1(I) ->{
      return <int 1>;
    };
    r1: v1(I) = upcast< * -~> v1(I) >(r5);
    # nil
    r6: p(v1(I) -) = prom<v1(I) ->{
      return <int 1>;
    };
    r2: v1(I) = upcast< * -~> v1(I) >(r6);
    # not nil
    r3: V = downcast< v1(I) -~> V >(r2);
    r4: V = downcast< v1(I) -~> V >(r0);
    return r4;
  }
}

fun upcast(`...`) {
  (reg r:*) -~> v1(I) {
    r0: p(v1(I) -) = r as p(v1(I) -);
    r1: v1(I) = force r0;
    return r1;
  }
}

fun downcast(`...`) {
  (reg r:v1(I)) -~> V {
    r0: V = r as V;
    return r0;
  }
}
