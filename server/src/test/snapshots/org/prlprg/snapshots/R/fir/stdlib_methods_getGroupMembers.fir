fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner876220315;
    st getGroupMembers = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner876220315(group, recursive, character) {
  (reg group:*, reg recursive:*, reg character:*) -+> V { var group:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var character:*, reg character_isMissing:L, reg character_orDefault:*, reg r:cls, reg getGeneric:cls, reg group1:*, reg group2:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg f:*, reg f1:V, reg c:V, reg c1:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg f2:*, reg f3:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg character1:cls, reg r11:V, reg is:cls, reg f4:*, reg f5:V, reg p4:p(V +), reg r13:V, reg r14:V, reg c2:L, reg character2:cls, reg r15:V, reg __:cls, reg r16:V, reg recursive1:*, reg recursive2:V, reg c3:L, reg __1:cls, reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg where:*, reg where1:V, reg identical:cls, reg r20:V, reg c4:L, reg _recMembers:cls, reg members:*, reg members1:V, reg p5:p(V +), reg _methodsNamespace:*, reg _methodsNamespace1:V, reg p6:p(V +), reg r23:V, reg r24:V, reg _recMembers1:cls, reg members2:*, reg members3:V, reg p7:p(V +), reg _requirePackage:cls, reg where2:*, reg where3:V, reg p8:p(V +), reg r27:V, reg p9:p(V +), reg r29:V, reg character3:*, reg character4:V, reg c5:L, reg sapply:cls, reg members4:*, reg members5:V, reg p10:p(V +), reg r32:cls, reg p11:p(V +), reg r34:V, reg members6:*, reg members7:V |
    mkenv;
    st group = group;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    character_isMissing = missing.0(character);
    if character_isMissing then L1(TRUE) else L1(character);
  L1(character_orDefault):
    st character = character_orDefault;
    r = clos inner2608908506;
    st `.recMembers` = r;
    getGeneric = ldf getGeneric;
    check L11() else D0();
  D0():
    deopt 4 [];
  L11():
    p = prom<V +>{
      group1 = ld group;
      group2 = force? group1;
      checkMissing(group2);
      return group2;
    };
    r2 = dyn getGeneric(p);
    check L12() else D1();
  D1():
    deopt 6 [r2];
  L12():
    st f = r2;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L2(r4):
    c1 = `as.logical`(r4);
    if c1 then L16() else L3();
  L13():
    f = ld f;
    check L15() else D2();
  L14():
    r3 = dyn base(<sym f>);
    goto L2(r3);
  D2():
    deopt 9 [f];
  L3():
    is = ldf is;
    check L22() else D7();
  L15():
    f1 = force? f;
    checkMissing(f1);
    c = `==`(f1, NULL);
    goto L2(c);
  L16():
    warning = ldf warning;
    check L17() else D3();
  D3():
    deopt 13 [];
  D7():
    deopt 22 [];
  L17():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        sQuote = ldf sQuote;
        p1 = prom<V +>{
          f2 = ld f;
          f3 = force? f2;
          checkMissing(f3);
          return f3;
        };
        r6 = dyn sQuote(p1);
        return r6;
      };
      r8 = dyn gettextf("%s is not a generic function (or not visible here)", p2);
      return r8;
    };
    r10 = dyn warning[, domain](p3, NA_LGL);
    check L18() else D4();
  L22():
    p4 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    r13 = dyn is(p4, "groupGenericFunction");
    check L23() else D8();
  D4():
    deopt 17 [r10];
  D8():
    deopt 25 [r13];
  L18():
    character1 = ldf character;
    check L19() else D5();
  L23():
    r14 = `!`(r13);
    c2 = `as.logical`(r14);
    if c2 then L24() else L4();
  D5():
    deopt 19 [];
  L4():
    __ = ldf `@` in base;
    r16 = dyn __(<sym f>, <sym groupMembers>);
    st members = r16;
    recursive1 = ld recursive;
    check L28() else D11();
  L19():
    r11 = dyn character1();
    check L20() else D6();
  L24():
    character2 = ldf character;
    check L25() else D9();
  D6():
    deopt 20 [r11];
  D9():
    deopt 28 [];
  D11():
    deopt 33 [recursive1];
  L20():
    popenv;
    return r11;
  L25():
    r15 = dyn character2();
    check L26() else D10();
  L28():
    recursive2 = force? recursive1;
    checkMissing(recursive2);
    c3 = `as.logical`(recursive2);
    if c3 then L29() else L5();
  D10():
    deopt 29 [r15];
  L5():
    goto L9();
  L9():
    character3 = ld character;
    check L41() else D18();
  L26():
    popenv;
    return r15;
  L29():
    __1 = ldf `@` in base;
    r17 = dyn __1(<sym f>, <sym package>);
    st where = r17;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  D18():
    deopt 69 [character3];
  L6(r19):
    c4 = `as.logical`(r19);
    if c4 then L34() else L7();
  L30():
    where = ld where;
    check L32() else D12();
  L31():
    r18 = dyn base1(<sym where>, "base");
    goto L6(r18);
  L41():
    character4 = force? character3;
    checkMissing(character4);
    c5 = `as.logical`(character4);
    if c5 then L42() else L10();
  D12():
    deopt 40 [where];
  L7():
    _recMembers1 = ldf `.recMembers`;
    check L38() else D16();
  L8(r24):
    goto L9();
  L10():
    members6 = ld members;
    check L46() else D21();
  L32():
    where1 = force? where;
    checkMissing(where1);
    identical = ldf identical in base;
    r20 = dyn identical(where1, "base", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L33() else D13();
  L34():
    st where = "methods";
    _recMembers = ldf `.recMembers`;
    check L35() else D14();
  L42():
    sapply = ldf sapply;
    check L43() else D19();
  D13():
    deopt 51 [r20];
  D14():
    deopt 56 [];
  D16():
    deopt 62 [];
  D19():
    deopt 72 [];
  D21():
    deopt 76 [members6];
  L33():
    goto L6(r20);
  L35():
    p5 = prom<V +>{
      members = ld members;
      members1 = force? members;
      checkMissing(members1);
      return members1;
    };
    p6 = prom<V +>{
      _methodsNamespace = ld `.methodsNamespace`;
      _methodsNamespace1 = force? _methodsNamespace;
      checkMissing(_methodsNamespace1);
      return _methodsNamespace1;
    };
    r23 = dyn _recMembers(p5, p6);
    check L36() else D15();
  L38():
    p7 = prom<V +>{
      members2 = ld members;
      members3 = force? members2;
      checkMissing(members3);
      return members3;
    };
    p9 = prom<V +>{
      _requirePackage = ldf `.requirePackage`;
      p8 = prom<V +>{
        where2 = ld where;
        where3 = force? where2;
        checkMissing(where3);
        return where3;
      };
      r27 = dyn _requirePackage(p8);
      return r27;
    };
    r29 = dyn _recMembers1(p7, p9);
    check L39() else D17();
  L43():
    p10 = prom<V +>{
      members4 = ld members;
      members5 = force? members4;
      checkMissing(members5);
      return members5;
    };
    p11 = prom<V +>{
      r32 = clos inner2501545716;
      return r32;
    };
    r34 = dyn sapply(p10, p11);
    check L44() else D20();
  L46():
    members7 = force? members6;
    checkMissing(members7);
    popenv;
    return members7;
  D15():
    deopt 59 [r23];
  D17():
    deopt 65 [r29];
  D20():
    deopt 75 [r34];
  L36():
    st members = r23;
    goto L8(r23);
  L39():
    st members = r29;
    goto L8(r29);
  L44():
    popenv;
    return r34;
  }
}
fun inner2608908506(members, where) {
  (reg members:*, reg where:*) -+> V { var members:*, var where:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg members1:*, reg members2:V, reg length:cls, reg r4:V, reg vector:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg members3:*, reg members4:V, reg r8:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg members5:*, reg members6:V, reg c1:L, reg i6:I, reg members8:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r9:V, reg getGeneric:cls, reg what:*, reg what1:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg i13:I, reg r14:V, reg f:*, reg f1:V, reg c2:V, reg r15:V, reg c3:L, reg what2:*, reg what3:V, reg l1:*, reg c4:L, reg i17:I, reg what5:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i19:I, reg what7:V, reg dx3:V, reg i20:*, reg i21:V, reg ____:cls, reg r16:V, reg i22:I, reg is:cls, reg f2:*, reg f3:V, reg p2:p(V +), reg r18:V, reg c5:L, reg __1:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg i27:I, reg r21:V, reg all:*, reg all1:V, reg Recall:cls, reg newMem:*, reg newMem1:V, reg p3:p(V +), reg where3:*, reg where4:V, reg p4:p(V +), reg r24:V, reg c6:cls, reg r25:V, reg i28:I, reg all2:*, reg all3:V |
    mkenv;
    st members = members;
    st where = where;
    sym = ldf vector;
    base = ldf vector in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    st all = r1;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L13():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L14():
    r = dyn base("list", <lang length(members)>);
    goto L0(r);
  L1(r3):
    vector = ldf vector in base;
    r5 = dyn vector("list", r3);
    check L19() else D2();
  L2(r7):
    s = toForSeq(r7);
    l = length(s);
    i = 0;
    goto L3(i);
  L15():
    members1 = ld members;
    check L17() else D0();
  L16():
    r2 = dyn base1(<sym members>);
    goto L1(r2);
  L20():
    members3 = ld members;
    check L22() else D3();
  L21():
    r6 = dyn base2(<sym members>);
    goto L2(r6);
  D0():
    deopt 5 [members1];
  D2():
    deopt 10 [r5];
  D3():
    deopt 13 [members3];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L23() else L12();
  L17():
    members2 = force? members1;
    checkMissing(members2);
    length = ldf length in base;
    r4 = dyn length(members2);
    check L18() else D1();
  L19():
    goto L0(r5);
  L22():
    members4 = force? members3;
    checkMissing(members4);
    r8 = seq_along(members4);
    goto L2(r8);
  D1():
    deopt 8 [r4];
  L12():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    members5 = ld members;
    check L24() else D4();
  L18():
    goto L1(r4);
  L23():
    all2 = ld all;
    check L51() else D17();
  D4():
    deopt 16 [i2, members5];
  D17():
    deopt 68 [all2];
  L24():
    members6 = force? members5;
    checkMissing(members6);
    c1 = `is.object`(members6);
    if c1 then L25() else L26(i2, members6);
  L51():
    all3 = force? all2;
    checkMissing(all3);
    popenv;
    return all3;
  L4(i8, dx1):
    st what = dx1;
    getGeneric = ldf getGeneric;
    check L29() else D6();
  L25():
    dr = tryDispatchBuiltin.1("[[", members6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(i2, dr);
  L26(i6, members8):
    i9 = ld i;
    check L28() else D5();
  D5():
    deopt 18 [i6, members8, i9];
  D6():
    deopt 23 [i8];
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(i2, dx);
  L28():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r9 = dyn __(members8, i10);
    goto L4(i6, r9);
  L29():
    p = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r12 = dyn getGeneric(p, FALSE, p1);
    check L30() else D7();
  D7():
    deopt 27 [i8, r12];
  L30():
    st f = r12;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L5(i13, r14):
    r15 = `!`(r14);
    c3 = `as.logical`(r15);
    if c3 then L34() else L6();
  L31():
    f = ld f;
    check L33() else D8();
  L32():
    r13 = dyn base3(<sym f>);
    goto L5(i8, r13);
  D8():
    deopt 30 [i8, f];
  L6():
    goto L8(i13);
  L8(i22):
    is = ldf is;
    check L41() else D11();
  L33():
    f1 = force? f;
    checkMissing(f1);
    c2 = `==`(f1, NULL);
    goto L5(i8, c2);
  L34():
    what2 = ld what;
    check L35() else D9();
  D9():
    deopt 34 [i13, what2];
  D11():
    deopt 44 [i22];
  L35():
    what3 = force? what2;
    checkMissing(what3);
    l1 = ld all;
    c4 = `is.object`(l1);
    if c4 then L36() else L37(i13, what3, l1);
  L41():
    p2 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    r18 = dyn is(p2, "groupGenericFunction");
    check L42() else D12();
  D12():
    deopt 47 [i22, r18];
  L7(i19, what7, dx3):
    st all = dx3;
    goto L8(i19);
  L36():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, what3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L38() else L37(i13, what3, dr2);
  L37(i17, what5, l3):
    i20 = ld i;
    check L39() else D10();
  L42():
    c5 = `as.logical`(r18);
    if c5 then L43() else L9();
  D10():
    deopt 37 [i17, what5, l3, what3, i20];
  L9():
    goto L11(i22);
  L11(i28):
    goto L3(i28);
  L38():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(i13, what3, dx2);
  L39():
    i21 = force? i20;
    ____ = ldf `[[<-` in base;
    r16 = dyn ____(l3, what3, i21);
    goto L7(i17, what5, r16);
  L43():
    __1 = ldf `@` in base;
    r19 = dyn __1(<sym f>, <sym groupMembers>);
    st newMem = r19;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L10(i27, r21):
    st all = r21;
    goto L11(i27);
  L44():
    all = ld all;
    check L46() else D13();
  L45():
    r20 = dyn base4(<sym all>, <lang Recall(newMem, where)>);
    goto L10(i22, r20);
  D13():
    deopt 53 [i22, all];
  L46():
    all1 = force? all;
    checkMissing(all1);
    Recall = ldf Recall;
    check L47() else D14();
  D14():
    deopt 56 [i22];
  L47():
    p3 = prom<V +>{
      newMem = ld newMem;
      newMem1 = force? newMem;
      checkMissing(newMem1);
      return newMem1;
    };
    p4 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r24 = dyn Recall(p3, p4);
    check L48() else D15();
  D15():
    deopt 59 [i22, r24];
  L48():
    c6 = ldf c in base;
    r25 = dyn c6(all1, r24);
    check L49() else D16();
  D16():
    deopt 61 [i22, r25];
  L49():
    goto L10(i22, r25);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg is:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg x3:*, reg x4:V, reg is1:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r3:V, reg c1:L, reg __:cls, reg r4:V, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x7:*, reg x8:V, reg class:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg r13:V |
    mkenv;
    st x = x;
    is = ldf is;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is(p, "character");
    check L3() else D1();
  D1():
    deopt 4 [r1];
  L3():
    c = `as.logical`(r1);
    if c then L4() else L0();
  L0():
    is1 = ldf is;
    check L7() else D3();
  L4():
    x3 = ld x;
    check L5() else D2();
  D2():
    deopt 5 [x3];
  D3():
    deopt 8 [];
  L5():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L7():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r3 = dyn is1(p1, "genericFunction");
    check L8() else D4();
  D4():
    deopt 11 [r3];
  L8():
    c1 = `as.logical`(r3);
    if c1 then L9() else L1();
  L1():
    stop = ldf stop;
    check L11() else D5();
  L9():
    __ = ldf `@` in base;
    r4 = dyn __(<sym x>, <sym generic>);
    popenv;
    return r4;
  D5():
    deopt 15 [];
  L11():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        dQuote = ldf dQuote;
        p2 = prom<V +>{
          sym = ldf class;
          base = ldf class in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r6):
          return r6;
        L1():
          x7 = ld x;
          x8 = force? x7;
          checkMissing(x8);
          class = ldf class in base;
          r7 = dyn class(x8);
          goto L0(r7);
        L2():
          r5 = dyn base(<sym x>);
          goto L0(r5);
        };
        r9 = dyn dQuote(p2);
        return r9;
      };
      r11 = dyn gettextf("invalid element in the \"groupMembers\" slot (class %s)", p3);
      return r11;
    };
    r13 = dyn stop[, domain](p4, NA_LGL);
    check L12() else D6();
  D6():
    deopt 19 [r13];
  L12():
    popenv;
    return r13;
  }
}