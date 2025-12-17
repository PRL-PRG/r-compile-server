fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner24150463;
    st `getInitial.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner24150463(object, data, mCall, LHS, `...`) {
  (reg object:*, reg data:*, reg mCall:*, reg LHS:*, reg ddd:dots) -+> V { var object:*, var data:*, var mCall:*, var LHS:*, reg LHS_isMissing:L, reg LHS_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg is_function:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c8:L, reg r6:V, reg object3:*, reg object4:V, reg attr:cls, reg r7:V, reg c9:V, reg r8:V, reg c10:L, reg c11:V, reg c13:L, reg stop:cls, reg r9:V, reg stop1:cls, reg gettextf:cls, reg data_class:cls, reg object5:*, reg object6:V, reg p:p(V +), reg r12:V, reg p1:p(V +), reg r14:V, reg p2:p(V +), reg r16:V |
    mkenv;
    st object = object;
    st data = data;
    st mCall = mCall;
    LHS_isMissing = missing.0(LHS);
    if LHS_isMissing then L0(NULL) else L0(LHS);
  L0(LHS_orDefault):
    st LHS = LHS_orDefault;
    st `...` = ddd;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r1):
    c = `as.logical`(r1);
    if c then L11() else L2(c);
  L7():
    object1 = ld object;
    check L9() else D0();
  L8():
    r = dyn base(<sym object>);
    goto L1(r);
  D0():
    deopt 2 [object1];
  L2(c2):
    c13 = `as.logical`(c2);
    if c13 then L19() else L5();
  L9():
    object2 = force? object1;
    checkMissing(object2);
    is_function = ldf `is.function` in base;
    r2 = dyn is_function(object2);
    check L10() else D1();
  L11():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  D1():
    deopt 5 [r2];
  L3(c5, r4):
    r8 = `!`(r4);
    c10 = `as.logical`(r8);
    c11 = `&&`(c5, c10);
    goto L2(c11);
  L5():
    goto L6();
  L6():
    stop1 = ldf stop;
    check L23() else D6();
  L10():
    goto L1(r2);
  L12():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L13():
    r3 = dyn base1(<lang attr(object, "initial")>);
    goto L3(c, r3);
  L19():
    stop = ldf stop;
    check L20() else D4();
  D4():
    deopt 18 [];
  D6():
    deopt 36 [];
  L4(c8, r6):
    c9 = `==`(r6, NULL);
    goto L3(c8, c9);
  L14():
    object3 = ld object;
    check L16() else D2();
  L15():
    r5 = dyn base2(<sym object>, "initial");
    goto L4(c, r5);
  L20():
    r9 = dyn stop[, , , , , , , , , , , domain]("old-style self-starting model functions\n", "are no longer supported.\n", "New selfStart functions are available.\n", "Use\n", "  SSfpl instead of fpl,\n", "  SSfol instead of first.order.log,\n", "  SSbiexp instead of biexp,\n", "  SSlogis instead of logistic.\n", "If writing your own selfStart model, see\n", "  \"help(selfStart)\"\n", "for the new form of the \"initial\" attribute.", NA_LGL);
    check L21() else D5();
  L23():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        data_class = ldf `data.class`;
        p = prom<V +>{
          object5 = ld object;
          object6 = force? object5;
          checkMissing(object6);
          return object6;
        };
        r12 = dyn data_class(p);
        return r12;
      };
      r14 = dyn gettextf("no 'getInitial' method found for \"%s\" objects", p1);
      return r14;
    };
    r16 = dyn stop1[, domain](p2, NA_LGL);
    check L24() else D7();
  D2():
    deopt 9 [c, object3];
  D5():
    deopt 32 [r9];
  D7():
    deopt 40 [r16];
  L16():
    object4 = force? object3;
    checkMissing(object4);
    attr = ldf attr in base;
    r7 = dyn attr(object4, "initial");
    check L17() else D3();
  L21():
    goto L6();
  L24():
    popenv;
    return r16;
  D3():
    deopt 13 [c, r7];
  L17():
    goto L4(c, r7);
  }
}