fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.make_RFC_2822_email_address_regexp` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sprintf:cls, reg ASCII_letters_and_digits:*, reg ASCII_letters_and_digits1:V, reg p:p(V +), reg r1:V, reg sprintf1:cls, reg ASCII_letters_and_digits2:*, reg ASCII_letters_and_digits3:V, reg p1:p(V +), reg r3:V, reg sprintf2:cls, reg l:*, reg l1:V, reg p2:p(V +), reg l2:*, reg l3:V, reg p3:p(V +), reg d:*, reg d1:V, reg p4:p(V +), reg d2:*, reg d3:V, reg p5:p(V +), reg r8:V |
    mkenv;
    st ASCII_letters_and_digits = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      ASCII_letters_and_digits = ld ASCII_letters_and_digits;
      ASCII_letters_and_digits1 = force? ASCII_letters_and_digits;
      checkMissing(ASCII_letters_and_digits1);
      return ASCII_letters_and_digits1;
    };
    r1 = dyn sprintf("[%s%s]", p, "!#$%*/?|^{}`~&'+=_-");
    check L1() else D1();
  D1():
    deopt 8 [r1];
  L1():
    st l = r1;
    sprintf1 = ldf sprintf;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    p1 = prom<V +>{
      ASCII_letters_and_digits2 = ld ASCII_letters_and_digits;
      ASCII_letters_and_digits3 = force? ASCII_letters_and_digits2;
      checkMissing(ASCII_letters_and_digits3);
      return ASCII_letters_and_digits3;
    };
    r3 = dyn sprintf1("[%s%s]", p1, "-");
    check L3() else D3();
  D3():
    deopt 15 [r3];
  L3():
    st d = r3;
    sprintf2 = ldf sprintf;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p2 = prom<V +>{
      l = ld l;
      l1 = force? l;
      checkMissing(l1);
      return l1;
    };
    p3 = prom<V +>{
      l2 = ld l;
      l3 = force? l2;
      checkMissing(l3);
      return l3;
    };
    p4 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    p5 = prom<V +>{
      d2 = ld d;
      d3 = force? d2;
      checkMissing(d3);
      return d3;
    };
    r8 = dyn sprintf2("(\\\".+\\\"|(%s+\\.)*%s+)@(%s+\\.)*%s+", p2, p3, p4, p5);
    check L5() else D5();
  D5():
    deopt 24 [r8];
  L5():
    popenv;
    return r8;
  }
}