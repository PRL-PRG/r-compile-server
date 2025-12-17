fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3304446614;
    st `c.bibentry` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3304446614(`...`, recursive) {
  (reg ddd:dots, reg recursive:*) -+> V { var `...`:dots?, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg vapply:cls, reg args:*, reg args1:V, reg p:p(V +), reg inherits:*, reg inherits1:V, reg p1:p(V +), reg r7:V, reg all:cls, reg r8:V, reg r9:V, reg c:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg r14:V, reg lapply:cls, reg args2:*, reg args3:V, reg p4:p(V +), reg unclass:*, reg unclass1:V, reg p5:p(V +), reg r18:V, reg do_call:cls, reg c1:*, reg c2:V, reg p6:p(V +), reg args4:*, reg args5:V, reg p7:p(V +), reg r21:V, reg unlist:cls, reg lapply1:cls, reg args6:*, reg args7:V, reg p8:p(V +), reg attr:*, reg attr1:V, reg p9:p(V +), reg r24:V, reg p10:p(V +), reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg mheader:*, reg mheader1:V, reg length:cls, reg r29:V, reg r30:V, reg c3:L, reg paste:cls, reg mheader2:*, reg mheader3:V, reg p11:p(V +), reg r32:V, reg l:*, reg attr__:cls, reg r33:V, reg unlist1:cls, reg lapply2:cls, reg args8:*, reg args9:V, reg p12:p(V +), reg attr2:*, reg attr3:V, reg p13:p(V +), reg r37:V, reg p14:p(V +), reg r39:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg r41:V, reg mfooter:*, reg mfooter1:V, reg length1:cls, reg r42:V, reg r43:V, reg c4:L, reg paste1:cls, reg mfooter2:*, reg mfooter3:V, reg p15:p(V +), reg r45:V, reg l1:*, reg attr__1:cls, reg r46:V, reg _bibentry:cls, reg rval:*, reg rval1:V, reg p16:p(V +), reg r49:V |
    mkenv;
    st `...` = ddd;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r1):
    st args = r1;
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L11():
    list = ldf list;
    check L13() else D0();
  L12():
    r = dyn base(<sym ...>);
    goto L1(r);
  D0():
    deopt 2 [];
  L2(r4):
    r9 = `!`(r4);
    c = `as.logical`(r9);
    if c then L20() else L3();
  L13():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L14() else D1();
  L15():
    vapply = ldf vapply;
    check L17() else D2();
  L16():
    r3 = dyn base1(<lang vapply(args, inherits, NA_LGL, "bibentry")>);
    goto L2(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 9 [];
  L3():
    goto L4();
  L4():
    lapply = ldf lapply;
    check L24() else D7();
  L14():
    goto L1(r2);
  L17():
    p = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    p1 = prom<V +>{
      inherits = ld inherits;
      inherits1 = force? inherits;
      checkMissing(inherits1);
      return inherits1;
    };
    r7 = dyn vapply(p, p1, NA_LGL, "bibentry");
    check L18() else D3();
  L20():
    warning = ldf warning;
    check L21() else D5();
  D3():
    deopt 14 [r7];
  D5():
    deopt 19 [];
  D7():
    deopt 27 [];
  L18():
    all = ldf all in base;
    r8 = dyn all(r7);
    check L19() else D4();
  L21():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        sQuote = ldf sQuote;
        r10 = dyn sQuote("bibentry");
        return r10;
      };
      r12 = dyn gettextf("method is only applicable to %s objects", p2);
      return r12;
    };
    r14 = dyn warning[, domain](p3, NA_LGL);
    check L22() else D6();
  L24():
    p4 = prom<V +>{
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      return args3;
    };
    p5 = prom<V +>{
      unclass = ld unclass;
      unclass1 = force? unclass;
      checkMissing(unclass1);
      return unclass1;
    };
    r18 = dyn lapply(p4, p5);
    check L25() else D8();
  D4():
    deopt 16 [r8];
  D6():
    deopt 23 [r14];
  D8():
    deopt 30 [r18];
  L19():
    goto L2(r8);
  L22():
    goto L4();
  L25():
    st args = r18;
    do_call = ldf `do.call`;
    check L26() else D9();
  D9():
    deopt 33 [];
  L26():
    p6 = prom<V +>{
      c1 = ld c;
      c2 = force? c1;
      checkMissing(c2);
      return c2;
    };
    p7 = prom<V +>{
      args4 = ld args;
      args5 = force? args4;
      checkMissing(args5);
      return args5;
    };
    r21 = dyn do_call(p6, p7);
    check L27() else D10();
  D10():
    deopt 36 [r21];
  L27():
    st rval = r21;
    unlist = ldf unlist;
    check L28() else D11();
  D11():
    deopt 39 [];
  L28():
    p10 = prom<V +>{
      lapply1 = ldf lapply;
      p8 = prom<V +>{
        args6 = ld args;
        args7 = force? args6;
        checkMissing(args7);
        return args7;
      };
      p9 = prom<V +>{
        attr = ld attr;
        attr1 = force? attr;
        checkMissing(attr1);
        return attr1;
      };
      r24 = dyn lapply1(p8, p9, "mheader");
      return r24;
    };
    r26 = dyn unlist(p10);
    check L29() else D12();
  D12():
    deopt 41 [r26];
  L29():
    st mheader = r26;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L5(r28):
    r30 = `>=`(r28, 1);
    c3 = `as.logical`(r30);
    if c3 then L34() else L6();
  L30():
    mheader = ld mheader;
    check L32() else D13();
  L31():
    r27 = dyn base2(<sym mheader>);
    goto L5(r27);
  D13():
    deopt 45 [mheader];
  L6():
    goto L7();
  L7():
    unlist1 = ldf unlist;
    check L40() else D19();
  L32():
    mheader1 = force? mheader;
    checkMissing(mheader1);
    length = ldf length in base;
    r29 = dyn length(mheader1);
    check L33() else D14();
  L34():
    paste = ldf paste;
    check L35() else D15();
  D14():
    deopt 48 [r29];
  D15():
    deopt 52 [];
  D19():
    deopt 66 [];
  L33():
    goto L5(r29);
  L35():
    p11 = prom<V +>{
      mheader2 = ld mheader;
      mheader3 = force? mheader2;
      checkMissing(mheader3);
      return mheader3;
    };
    r32 = dyn paste[, collapse](p11, "\n");
    check L36() else D16();
  L40():
    p14 = prom<V +>{
      lapply2 = ldf lapply;
      p12 = prom<V +>{
        args8 = ld args;
        args9 = force? args8;
        checkMissing(args9);
        return args9;
      };
      p13 = prom<V +>{
        attr2 = ld attr;
        attr3 = force? attr2;
        checkMissing(attr3);
        return attr3;
      };
      r37 = dyn lapply2(p12, p13, "mfooter");
      return r37;
    };
    r39 = dyn unlist1(p14);
    check L41() else D20();
  D16():
    deopt 56 [r32];
  D20():
    deopt 68 [r39];
  L36():
    l = ld rval;
    attr__ = ldf `attr<-`;
    check L37() else D17();
  L41():
    st mfooter = r39;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  D17():
    deopt 58 [r32, l, r32];
  L8(r41):
    r43 = `>=`(r41, 1);
    c4 = `as.logical`(r43);
    if c4 then L46() else L9();
  L37():
    r33 = dyn attr__(l, NULL, "mheader", r32);
    check L38() else D18();
  L42():
    mfooter = ld mfooter;
    check L44() else D21();
  L43():
    r40 = dyn base3(<sym mfooter>);
    goto L8(r40);
  D18():
    deopt 61 [r32, r33];
  D21():
    deopt 72 [mfooter];
  L9():
    goto L10();
  L10():
    _bibentry = ldf `.bibentry`;
    check L52() else D27();
  L38():
    st rval = r33;
    goto L7();
  L44():
    mfooter1 = force? mfooter;
    checkMissing(mfooter1);
    length1 = ldf length in base;
    r42 = dyn length1(mfooter1);
    check L45() else D22();
  L46():
    paste1 = ldf paste;
    check L47() else D23();
  D22():
    deopt 75 [r42];
  D23():
    deopt 79 [];
  D27():
    deopt 93 [];
  L45():
    goto L8(r42);
  L47():
    p15 = prom<V +>{
      mfooter2 = ld mfooter;
      mfooter3 = force? mfooter2;
      checkMissing(mfooter3);
      return mfooter3;
    };
    r45 = dyn paste1[, collapse](p15, "\n");
    check L48() else D24();
  L52():
    p16 = prom<V +>{
      rval = ld rval;
      rval1 = force? rval;
      checkMissing(rval1);
      return rval1;
    };
    r49 = dyn _bibentry(p16);
    check L53() else D28();
  D24():
    deopt 83 [r45];
  D28():
    deopt 95 [r49];
  L48():
    l1 = ld rval;
    attr__1 = ldf `attr<-`;
    check L49() else D25();
  L53():
    popenv;
    return r49;
  D25():
    deopt 85 [r45, l1, r45];
  L49():
    r46 = dyn attr__1(l1, NULL, "mfooter", r45);
    check L50() else D26();
  D26():
    deopt 88 [r45, r46];
  L50():
    st rval = r46;
    goto L10();
  }
}