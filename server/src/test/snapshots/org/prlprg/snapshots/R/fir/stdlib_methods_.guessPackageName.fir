fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2916718377;
    st `.guessPackageName` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2916718377(env) {
  (reg env:*) -+> V { var env:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg names:cls, reg r2:V, reg allObjects:*, reg allObjects1:V, reg c:L, reg allObjects3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg allObjects6:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg allObjects9:V, reg r6:V, reg allObjects10:*, reg allObjects11:V, reg _functionsOverriden:*, reg _functionsOverriden1:V, reg match:cls, reg r7:V, reg is_na:cls, reg r8:V, reg __:cls, reg r9:V, reg sort:cls, reg table:cls, reg unlist:cls, reg lapply:cls, reg allObjects12:*, reg allObjects13:V, reg p:p(V +), reg __1:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg p2:p(V +), reg r15:V, reg p3:p(V +), reg r17:V, reg p4:p(V +), reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg possible:*, reg possible1:V, reg length:cls, reg r22:V, reg r23:V, reg c1:L, reg stop:cls, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg possible2:*, reg possible3:V, reg length1:cls, reg r28:V, reg r29:V, reg c2:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg possible4:*, reg possible5:V, reg names1:cls, reg r34:V, reg match1:cls, reg r35:V, reg global:*, reg global1:V, reg r36:V, reg c3:L, reg possible6:*, reg possible7:V, reg c4:L, reg possible9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg global2:*, reg global3:V, reg r37:V, reg __2:cls, reg r38:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg possible10:*, reg possible11:V, reg length2:cls, reg r41:V, reg r42:V, reg c5:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg possible12:*, reg possible13:V, reg c6:L, reg possible15:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __3:cls, reg r45:V, reg names2:cls, reg r46:V, reg p5:p(V +), reg r48:V, reg p6:p(V +), reg paste:cls, reg sQuote1:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r50:V, reg r51:V, reg possible16:*, reg possible17:V, reg c7:L, reg possible19:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __4:cls, reg r52:V, reg names3:cls, reg r53:V, reg p7:p(V +), reg r55:V, reg p8:p(V +), reg r57:V, reg p9:p(V +), reg r59:V, reg p10:p(V +), reg r61:V, reg r62:V, reg _rmpkg:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r63:V, reg r64:V, reg possible20:*, reg possible21:V, reg c8:L, reg possible23:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg __5:cls, reg r65:V, reg names4:cls, reg r66:V, reg p11:p(V +), reg r68:V |
    mkenv;
    st env = env;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r1):
    st allObjects = r1;
    allObjects = ld allObjects;
    check L21() else D2();
  L17():
    env1 = ld env;
    check L19() else D0();
  L18():
    r = dyn base(<sym env>);
    goto L0(r);
  D0():
    deopt 2 [env1];
  D2():
    deopt 7 [allObjects];
  L19():
    env2 = force? env1;
    checkMissing(env2);
    names = ldf names in base;
    r2 = dyn names(env2);
    check L20() else D1();
  L21():
    allObjects1 = force? allObjects;
    checkMissing(allObjects1);
    c = `is.object`(allObjects1);
    if c then L22() else L23(allObjects1);
  D1():
    deopt 5 [r2];
  L1(dx1):
    st allObjects = dx1;
    sort = ldf sort;
    check L33() else D7();
  L20():
    goto L0(r2);
  L22():
    dr = tryDispatchBuiltin.1("[", allObjects1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(allObjects3):
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  D7():
    deopt 26 [];
  L2(allObjects6, r4):
    __ = ldf `[` in base;
    r9 = dyn __(allObjects6, r4);
    goto L1(r9);
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L25():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L26():
    r3 = dyn base1(<lang match(allObjects, .functionsOverriden)>);
    goto L2(allObjects3, r3);
  L33():
    p4 = prom<V +>{
      table = ldf table;
      p3 = prom<V +>{
        unlist = ldf unlist;
        p2 = prom<V +>{
          lapply = ldf lapply;
          p = prom<V +>{
            allObjects12 = ld allObjects;
            allObjects13 = force? allObjects12;
            checkMissing(allObjects13);
            return allObjects13;
          };
          p1 = prom<V +>{
            __1 = ldf `::`;
            r11 = dyn __1("utils", "find");
            return r11;
          };
          r13 = dyn lapply(p, p1);
          return r13;
        };
        r15 = dyn unlist(p2);
        return r15;
      };
      r17 = dyn table(p3);
      return r17;
    };
    r19 = dyn sort[, decreasing](p4, TRUE);
    check L34() else D8();
  D8():
    deopt 30 [r19];
  L3(allObjects9, r6):
    is_na = ldf `is.na` in base;
    r8 = dyn is_na(r6);
    check L32() else D6();
  L27():
    allObjects10 = ld allObjects;
    check L29() else D3();
  L28():
    r5 = dyn base2(<sym allObjects>, <sym .functionsOverriden>);
    goto L3(allObjects3, r5);
  L34():
    st possible = r19;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  D3():
    deopt 13 [allObjects3, allObjects10];
  D6():
    deopt 22 [allObjects9, r8];
  L4(r21):
    r23 = `==`(r21, 0.0);
    c1 = `as.logical`(r23);
    if c1 then L39() else L5();
  L29():
    allObjects11 = force? allObjects10;
    checkMissing(allObjects11);
    _functionsOverriden = ld `.functionsOverriden`;
    check L30() else D4();
  L32():
    goto L2(allObjects9, r8);
  L35():
    possible = ld possible;
    check L37() else D9();
  L36():
    r20 = dyn base3(<sym possible>);
    goto L4(r20);
  D4():
    deopt 15 [allObjects3, _functionsOverriden];
  D9():
    deopt 34 [possible];
  L5():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L6():
    _rmpkg = ldf `.rmpkg`;
    check L72() else D25();
  L30():
    _functionsOverriden1 = force? _functionsOverriden;
    checkMissing(_functionsOverriden1);
    match = ldf match in base;
    r7 = dyn match(allObjects11, _functionsOverriden1, NA_INT, NULL);
    check L31() else D5();
  L37():
    possible1 = force? possible;
    checkMissing(possible1);
    length = ldf length in base;
    r22 = dyn length(possible1);
    check L38() else D10();
  L39():
    stop = ldf stop;
    check L40() else D11();
  D5():
    deopt 20 [allObjects3, r7];
  D10():
    deopt 37 [r22];
  D11():
    deopt 41 [];
  D25():
    deopt 98 [];
  L7(r27):
    r29 = `>`(r27, 1);
    c2 = `as.logical`(r29);
    if c2 then L47() else L8();
  L31():
    goto L3(allObjects3, r7);
  L38():
    goto L4(r22);
  L40():
    r24 = dyn stop("none of the objects in the source code could be found:  need to attach or specify the package");
    check L41() else D12();
  L43():
    possible2 = ld possible;
    check L45() else D13();
  L44():
    r26 = dyn base4(<sym possible>);
    goto L7(r26);
  L72():
    p11 = prom<V +>{
      sym10 = ldf names;
      base10 = ldf names in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L2() else L3();
    L0(r64):
      return r64;
    L2():
      possible20 = ld possible;
      possible21 = force? possible20;
      checkMissing(possible21);
      c8 = `is.object`(possible21);
      if c8 then L4() else L5(possible21);
    L3():
      r63 = dyn base10(<lang `[`(possible, 1)>);
      goto L0(r63);
    L1(dx10):
      names4 = ldf names in base;
      r66 = dyn names4(dx10);
      goto L0(r66);
    L4():
      dr8 = tryDispatchBuiltin.1("[", possible21);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(possible23):
      __5 = ldf `[` in base;
      r65 = dyn __5(possible23, 1);
      goto L1(r65);
    L6():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx9);
    };
    r68 = dyn _rmpkg(p11);
    check L73() else D26();
  D12():
    deopt 43 [r24];
  D13():
    deopt 46 [possible2];
  D26():
    deopt 100 [r68];
  L8():
    goto L6();
  L41():
    goto L6();
  L45():
    possible3 = force? possible2;
    checkMissing(possible3);
    length1 = ldf length in base;
    r28 = dyn length1(possible3);
    check L46() else D14();
  L47():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L73():
    popenv;
    return r68;
  D14():
    deopt 49 [r28];
  L9(r31):
    st global = r31;
    global = ld global;
    check L55() else D18();
  L46():
    goto L7(r28);
  L48():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L50() else L51();
  L49():
    r30 = dyn base5(".GlobalEnv", <lang names(possible)>, 0.0);
    goto L9(r30);
  D18():
    deopt 66 [global];
  L10(r33):
    match1 = ldf match in base;
    r35 = dyn match1(".GlobalEnv", r33, 0.0, NULL);
    check L54() else D17();
  L50():
    possible4 = ld possible;
    check L52() else D15();
  L51():
    r32 = dyn base6(<sym possible>);
    goto L10(r32);
  L55():
    global1 = force? global;
    checkMissing(global1);
    r36 = `>`(global1, 0.0);
    c3 = `as.logical`(r36);
    if c3 then L56() else L11();
  D15():
    deopt 57 [possible4];
  D17():
    deopt 64 [r35];
  L11():
    goto L13();
  L13():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L63() else L64();
  L52():
    possible5 = force? possible4;
    checkMissing(possible5);
    names1 = ldf names in base;
    r34 = dyn names1(possible5);
    check L53() else D16();
  L54():
    goto L9(r35);
  L56():
    possible6 = ld possible;
    check L57() else D19();
  D16():
    deopt 60 [r34];
  D19():
    deopt 70 [possible6];
  L14(r40):
    r42 = `>`(r40, 1);
    c5 = `as.logical`(r42);
    if c5 then L67() else L15();
  L53():
    goto L10(r34);
  L57():
    possible7 = force? possible6;
    checkMissing(possible7);
    c4 = `is.object`(possible7);
    if c4 then L58() else L59(possible7);
  L63():
    possible10 = ld possible;
    check L65() else D21();
  L64():
    r39 = dyn base7(<sym possible>);
    goto L14(r39);
  D21():
    deopt 81 [possible10];
  L12(dx3):
    st possible = dx3;
    goto L13();
  L15():
    goto L16(NULL);
  L16(r62):
    goto L6();
  L58():
    dr2 = tryDispatchBuiltin.1("[", possible7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L60() else L59(dr2);
  L59(possible9):
    global2 = ld global;
    check L61() else D20();
  L65():
    possible11 = force? possible10;
    checkMissing(possible11);
    length2 = ldf length in base;
    r41 = dyn length2(possible11);
    check L66() else D22();
  L67():
    warning = ldf warning;
    check L68() else D23();
  D20():
    deopt 72 [possible9, global2];
  D22():
    deopt 84 [r41];
  D23():
    deopt 88 [];
  L60():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L61():
    global3 = force? global2;
    checkMissing(global3);
    r37 = `-`(<missing>, global3);
    __2 = ldf `[` in base;
    r38 = dyn __2(possible9, r37);
    goto L12(r38);
  L66():
    goto L14(r41);
  L68():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        sQuote = ldf sQuote;
        p5 = prom<V +>{
          sym8 = ldf names;
          base8 = ldf names in base;
          guard8 = `==`.4(sym8, base8);
          if guard8 then L2() else L3();
        L0(r44):
          return r44;
        L2():
          possible12 = ld possible;
          possible13 = force? possible12;
          checkMissing(possible13);
          c6 = `is.object`(possible13);
          if c6 then L4() else L5(possible13);
        L3():
          r43 = dyn base8(<lang `[[`(possible, 1)>);
          goto L0(r43);
        L1(dx6):
          names2 = ldf names in base;
          r46 = dyn names2(dx6);
          goto L0(r46);
        L4():
          dr4 = tryDispatchBuiltin.1("[[", possible13);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L6() else L5(dr4);
        L5(possible15):
          __3 = ldf `[[` in base;
          r45 = dyn __3(possible15, 1);
          goto L1(r45);
        L6():
          dx5 = getTryDispatchBuiltinValue(dr4);
          goto L1(dx5);
        };
        r48 = dyn sQuote(p5);
        return r48;
      };
      p9 = prom<V +>{
        paste = ldf paste;
        p8 = prom<V +>{
          sQuote1 = ldf sQuote;
          p7 = prom<V +>{
            sym9 = ldf names;
            base9 = ldf names in base;
            guard9 = `==`.4(sym9, base9);
            if guard9 then L2() else L3();
          L0(r51):
            return r51;
          L2():
            possible16 = ld possible;
            possible17 = force? possible16;
            checkMissing(possible17);
            c7 = `is.object`(possible17);
            if c7 then L4() else L5(possible17);
          L3():
            r50 = dyn base9(<lang `[`(possible, `-`(1))>);
            goto L0(r50);
          L1(dx8):
            names3 = ldf names in base;
            r53 = dyn names3(dx8);
            goto L0(r53);
          L4():
            dr6 = tryDispatchBuiltin.1("[", possible17);
            dc3 = getTryDispatchBuiltinDispatched(dr6);
            if dc3 then L6() else L5(dr6);
          L5(possible19):
            __4 = ldf `[` in base;
            r52 = dyn __4(possible19, -1);
            goto L1(r52);
          L6():
            dx7 = getTryDispatchBuiltinValue(dr6);
            goto L1(dx7);
          };
          r55 = dyn sQuote1(p7);
          return r55;
        };
        r57 = dyn paste[, collapse](p8, ", ");
        return r57;
      };
      r59 = dyn gettextf("objects found in multiple packages: using %s and ignoring %s", p6, p9);
      return r59;
    };
    r61 = dyn warning[, domain](p10, NA_LGL);
    check L69() else D24();
  D24():
    deopt 92 [r61];
  L69():
    goto L16(r61);
  }
}