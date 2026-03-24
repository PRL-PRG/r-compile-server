fun main() {
  () --> V { reg r0:p(v1(I) -), reg r1:p?(v1(I) -), reg v:V |
    r0 = prom<v1(I) ->{ return <int 1>; };
    r1 = r0 as p?(v1(I) -);
    v = force? r1;
    return v;
  }
}

fun force_no_effect(x) {
  (reg x:p?(V -)) --> V { reg r:V |
    r = force? x;
    return r;
  }
}
