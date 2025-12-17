fun main() {
  () -+> V { reg r:cls, reg isClass:cls, reg r1:V, reg c:L, reg removeClass:cls, reg r2:V, reg setClass:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg p:p(V +), reg r8:V, reg new:cls, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg r12:V, reg p2:p(V +), reg r14:V, reg slot:cls, reg myTrack:*, reg myTrack1:V, reg p3:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg slot1:cls, reg myTrack2:*, reg myTrack3:V, reg p4:p(V +), reg r20:V, reg r21:V, reg l:*, reg slot__:cls, reg r22:V, reg __:cls, reg r23:V, reg r24:cls, reg myTrack4:*, reg myTrack5:V, reg p5:p(V +), reg r26:V, reg getSlots:cls, reg r27:V, reg getSlots1:cls, reg getClass:cls, reg r28:V, reg p6:p(V +), reg r30:V, reg slotNames:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg myTrack6:*, reg myTrack7:V, reg class:cls, reg r33:V, reg p7:p(V +), reg r35:V, reg slotNames1:cls, reg myTrack8:*, reg myTrack9:V, reg p8:p(V +), reg r37:V, reg r38:cls, reg S4toList:cls, reg myTrack10:*, reg myTrack11:V, reg p9:p(V +), reg r40:V, reg removeClass1:cls, reg r41:V |
    mkenv;
    r = clos inner1396911006;
    st slot = r;
    isClass = ldf isClass;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    r1 = dyn isClass("track");
    check L4() else D1();
  D1():
    deopt 6 [r1];
  L4():
    c = `as.logical`(r1);
    if c then L5() else L0();
  L0():
    goto L1();
  L1():
    setClass = ldf setClass;
    check L9() else D4();
  L5():
    removeClass = ldf removeClass;
    check L6() else D2();
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L6():
    r2 = dyn removeClass("track");
    check L7() else D3();
  L9():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c1 = ldf c in base;
      r6 = dyn c1("numeric", "numeric");
      goto L0(r6);
    L2():
      r4 = dyn base[x, y]("numeric", "numeric");
      goto L0(r4);
    };
    r8 = dyn setClass[, slots]("track", p);
    check L10() else D5();
  D3():
    deopt 10 [r2];
  D5():
    deopt 18 [r8];
  L7():
    goto L1();
  L10():
    new = ldf new;
    check L11() else D6();
  D6():
    deopt 20 [];
  L11():
    p1 = prom<V +>{
      return <int -4, -3, -2, -1, 0, 1, 2, 3, 4>;
    };
    p2 = prom<V +>{
      sym1 = ldf exp;
      base1 = ldf exp in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      r12 = exp(<int -4, -3, -2, -1, 0, 1, 2, 3, 4>);
      goto L0(r12);
    L2():
      r10 = dyn base1(<lang `:`(`-`(4.0), 4.0)>);
      goto L0(r10);
    };
    r14 = dyn new[, x, y]("track", p1, p2);
    check L12() else D7();
  D7():
    deopt 26 [r14];
  L12():
    st myTrack = r14;
    slot = ldf slot;
    check L13() else D8();
  D8():
    deopt 29 [];
  L13():
    p3 = prom<V +>{
      myTrack = ld myTrack;
      myTrack1 = force? myTrack;
      checkMissing(myTrack1);
      return myTrack1;
    };
    r16 = dyn slot(p3, "x");
    check L14() else D9();
  D9():
    deopt 32 [r16];
  L14():
    sym2 = ldf log;
    base2 = ldf log in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L2(r18):
    l = ld myTrack;
    slot__ = ldf `slot<-`;
    check L19() else D12();
  L15():
    slot1 = ldf slot;
    check L17() else D10();
  L16():
    r17 = dyn base2(<lang slot(myTrack, "y")>);
    goto L2(r17);
  D10():
    deopt 35 [];
  D12():
    deopt 41 [r18, l, r18];
  L17():
    p4 = prom<V +>{
      myTrack2 = ld myTrack;
      myTrack3 = force? myTrack2;
      checkMissing(myTrack3);
      return myTrack3;
    };
    r20 = dyn slot1(p4, "y");
    check L18() else D11();
  L19():
    r22 = dyn slot__(l, NULL, "y", r18);
    check L20() else D13();
  D11():
    deopt 38 [r20];
  D13():
    deopt 44 [r18, r22];
  L18():
    r21 = log(r20, 2.718281828459045);
    goto L2(r21);
  L20():
    st myTrack = r22;
    __ = ldf `::`;
    check L21() else D14();
  D14():
    deopt 47 [];
  L21():
    r23 = dyn __("utils", "str");
    check L22() else D15();
  D15():
    deopt 50 [r23];
  L22():
    checkFun.0(r23);
    r24 = r23 as cls;
    p5 = prom<V +>{
      myTrack4 = ld myTrack;
      myTrack5 = force? myTrack4;
      checkMissing(myTrack5);
      return myTrack5;
    };
    r26 = dyn r24(p5);
    check L23() else D16();
  D16():
    deopt 53 [r26];
  L23():
    getSlots = ldf getSlots;
    check L24() else D17();
  D17():
    deopt 55 [];
  L24():
    r27 = dyn getSlots("track");
    check L25() else D18();
  D18():
    deopt 57 [r27];
  L25():
    getSlots1 = ldf getSlots;
    check L26() else D19();
  D19():
    deopt 59 [];
  L26():
    p6 = prom<V +>{
      getClass = ldf getClass;
      r28 = dyn getClass("track");
      return r28;
    };
    r30 = dyn getSlots1(p6);
    check L27() else D20();
  D20():
    deopt 61 [r30];
  L27():
    slotNames = ldf slotNames;
    check L28() else D21();
  D21():
    deopt 63 [];
  L28():
    p7 = prom<V +>{
      sym3 = ldf class;
      base3 = ldf class in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      myTrack6 = ld myTrack;
      myTrack7 = force? myTrack6;
      checkMissing(myTrack7);
      class = ldf class in base;
      r33 = dyn class(myTrack7);
      goto L0(r33);
    L2():
      r31 = dyn base3(<sym myTrack>);
      goto L0(r31);
    };
    r35 = dyn slotNames(p7);
    check L29() else D22();
  D22():
    deopt 65 [r35];
  L29():
    slotNames1 = ldf slotNames;
    check L30() else D23();
  D23():
    deopt 67 [];
  L30():
    p8 = prom<V +>{
      myTrack8 = ld myTrack;
      myTrack9 = force? myTrack8;
      checkMissing(myTrack9);
      return myTrack9;
    };
    r37 = dyn slotNames1(p8);
    check L31() else D24();
  D24():
    deopt 69 [r37];
  L31():
    r38 = clos inner1912617395;
    st S4toList = r38;
    S4toList = ldf S4toList;
    check L32() else D25();
  D25():
    deopt 74 [];
  L32():
    p9 = prom<V +>{
      myTrack10 = ld myTrack;
      myTrack11 = force? myTrack10;
      checkMissing(myTrack11);
      return myTrack11;
    };
    r40 = dyn S4toList(p9);
    check L33() else D26();
  D26():
    deopt 76 [r40];
  L33():
    removeClass1 = ldf removeClass;
    check L34() else D27();
  D27():
    deopt 78 [];
  L34():
    r41 = dyn removeClass1("track");
    check L35() else D28();
  D28():
    deopt 80 [r41];
  L35():
    popenv;
    return r41;
  }
}
fun inner1396911006(object, name) {
  (reg object:*, reg name:*) -+> V { var object:*, var name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_R_get_slot:*, reg C_R_get_slot1:V, reg object1:*, reg object2:V, reg name1:*, reg name2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st object = object;
    st name = name;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_R_get_slot = ld C_R_get_slot;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_R_get_slot>, <sym object>, <sym name>);
    goto L0(r);
  D0():
    deopt 1 [C_R_get_slot];
  L3():
    C_R_get_slot1 = force? C_R_get_slot;
    checkMissing(C_R_get_slot1);
    object1 = ld object;
    check L4() else D1();
  D1():
    deopt 2 [C_R_get_slot1, object1];
  L4():
    object2 = force? object1;
    checkMissing(object2);
    name1 = ld name;
    check L5() else D2();
  D2():
    deopt 3 [C_R_get_slot1, object2, name1];
  L5():
    name2 = force? name1;
    checkMissing(name2);
    vargs = dots[object2, name2];
    r2 = `.Call`(C_R_get_slot1, vargs, <missing>);
    goto L0(r2);
  }
}
fun inner1912617395(obj) {
  (reg obj:*) -+> V { var obj:*, reg slotNames:cls, reg obj1:*, reg obj2:V, reg p:p(V +), reg r1:V, reg structure:cls, reg lapply:cls, reg sn:*, reg sn1:V, reg p1:p(V +), reg slot:*, reg slot1:V, reg p2:p(V +), reg obj3:*, reg obj4:V, reg p3:p(V +), reg r5:V, reg p4:p(V +), reg sn2:*, reg sn3:V, reg p5:p(V +), reg r8:V |
    mkenv;
    st obj = obj;
    slotNames = ldf slotNames;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      obj1 = ld obj;
      obj2 = force? obj1;
      checkMissing(obj2);
      return obj2;
    };
    r1 = dyn slotNames(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    st sn = r1;
    structure = ldf structure;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p4 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        sn = ld sn;
        sn1 = force? sn;
        checkMissing(sn1);
        return sn1;
      };
      p2 = prom<V +>{
        slot = ld slot;
        slot1 = force? slot;
        checkMissing(slot1);
        return slot1;
      };
      p3 = prom<V +>{
        obj3 = ld obj;
        obj4 = force? obj3;
        checkMissing(obj4);
        return obj4;
      };
      r5 = dyn lapply[, , object](p1, p2, p3);
      return r5;
    };
    p5 = prom<V +>{
      sn2 = ld sn;
      sn3 = force? sn2;
      checkMissing(sn3);
      return sn3;
    };
    r8 = dyn structure[, names](p4, p5);
    check L3() else D3();
  D3():
    deopt 10 [r8];
  L3():
    popenv;
    return r8;
  }
}