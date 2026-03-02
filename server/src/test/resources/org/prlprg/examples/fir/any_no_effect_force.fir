fun main() {
  () --> V { reg r0:p(I -), reg r1:p?(I -), reg v:V |
    r0 = prom<I ->{ return 1; };
    r1 = r0 as p?(I -);
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
