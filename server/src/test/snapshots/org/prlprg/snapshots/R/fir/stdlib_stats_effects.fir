fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg effects:cls, reg lm:cls, reg __:cls, reg r7:V, reg p:p(V +), reg r9:V, reg p1:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg round:cls, reg r16:V, reg c2:cls, reg r17:V |
    mkenv;
    r = clos inner64320599;
    st effects = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r2):
    st y = r2;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L4():
    c = ldf c in base;
    r3 = dyn c(<int 1, 2, 3>, 7.0, 5.0);
    check L6() else D0();
  L5():
    r1 = dyn base(<lang `:`(1.0, 3.0)>, 7.0, 5.0);
    goto L0(r1);
  D0():
    deopt 10 [r3];
  L1(r5):
    st x = r5;
    effects = ldf effects;
    check L10() else D2();
  L6():
    goto L0(r3);
  L7():
    c1 = ldf c in base;
    r6 = dyn c1(<int 1, 2, 3>, <int 6, 7>);
    check L9() else D1();
  L8():
    r4 = dyn base1(<lang `:`(1.0, 3.0)>, <lang `:`(6.0, 7.0)>);
    goto L1(r4);
  D1():
    deopt 19 [r6];
  D2():
    deopt 22 [];
  L9():
    goto L1(r6);
  L10():
    p1 = prom<V +>{
      lm = ldf lm;
      p = prom<V +>{
        __ = ldf `~` in base;
        r7 = dyn __(<sym y>, <sym x>);
        return r7;
      };
      r9 = dyn lm(p);
      return r9;
    };
    r11 = dyn effects(p1);
    check L11() else D3();
  D3():
    deopt 24 [r11];
  L11():
    st ee = r11;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L2(r13):
    popenv;
    return r13;
  L12():
    sym3 = ldf round;
    base3 = ldf round in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L14() else L15();
  L13():
    r12 = dyn base2(<lang round(`-`(ee, effects(lm(`~`(`+`(y, 10.0), I(`-`(x, 3.8)))))), 3.0)>);
    goto L2(r12);
  L3(r15):
    c2 = ldf c in base;
    r17 = dyn c2(r15);
    check L16() else D4();
  L14():
    round = ldf round in base;
    r16 = dyn round(<lang `-`(ee, effects(lm(`~`(`+`(y, 10.0), I(`-`(x, 3.8))))))>, 3.0);
    goto L3(r16);
  L15():
    r14 = dyn base3(<lang `-`(ee, effects(lm(`~`(`+`(y, 10.0), I(`-`(x, 3.8))))))>, 3.0);
    goto L3(r14);
  D4():
    deopt 32 [r17];
  L16():
    goto L2(r17);
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("effects");
    goto L0(r2);
  L2():
    r = dyn base("effects");
    goto L0(r);
  }
}