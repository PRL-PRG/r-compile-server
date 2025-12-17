fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st aspell_query_wiktionary_categories = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg unique:cls, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg p:p(V +), reg r5:V, reg getOption:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x7:*, reg x8:V, reg length:cls, reg r10:V, reg n:*, reg n1:V, reg ___:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg k:*, reg k1:V, reg r18:I, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg k2:*, reg k3:V, reg rep_int:cls, reg r21:V, reg rep_int1:cls, reg r22:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r23:V, reg r24:V, reg k4:*, reg k5:V, reg r25:V, reg n2:*, reg n3:V, reg __:cls, reg r26:V, reg rep_int2:cls, reg r27:V, reg c2:cls, reg r28:V, reg lapply:cls, reg split:cls, reg x9:*, reg x10:V, reg p1:p(V +), reg ind:*, reg ind1:V, reg p2:p(V +), reg r31:V, reg p3:p(V +), reg r33:cls, reg p4:p(V +), reg r35:V, reg Reduce:cls, reg c3:*, reg c4:V, reg p5:p(V +), reg y:*, reg y1:V, reg p6:p(V +), reg r38:V, reg c5:L, reg r40:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg x11:*, reg x12:V, reg __1:cls, reg r41:V |
    mkenv;
    st x = x;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    c = `as.logical`(r1);
    if c then L14() else L1();
  L10():
    x1 = ld x;
    check L12() else D0();
  L11():
    r = dyn base(<sym x>, "aspell");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    goto L2();
  L2():
    getOption = ldf getOption;
    check L18() else D4();
  L12():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "aspell", FALSE);
    check L13() else D1();
  L14():
    unique = ldf unique;
    check L15() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 16 [];
  L13():
    goto L0(r2);
  L15():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c1 = `is.object`(x4);
      if c1 then L1() else L2(x4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x6):
      r3 = `$`(x6, <sym Original>);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r5 = dyn unique(p);
    check L16() else D3();
  L18():
    r7 = dyn getOption("verbose");
    check L19() else D5();
  D3():
    deopt 11 [r5];
  D5():
    deopt 18 [r7];
  L16():
    st x = r5;
    goto L2();
  L19():
    st verbose = r7;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L3(r9):
    st n = r9;
    n = ld n;
    check L24() else D8();
  L20():
    x7 = ld x;
    check L22() else D6();
  L21():
    r8 = dyn base1(<sym x>);
    goto L3(r8);
  D6():
    deopt 22 [x7];
  D8():
    deopt 28 [n];
  L22():
    x8 = force? x7;
    checkMissing(x8);
    length = ldf length in base;
    r10 = dyn length(x8);
    check L23() else D7();
  L24():
    n1 = force? n;
    checkMissing(n1);
    ___ = ldf `%/%` in base;
    r11 = dyn ___(n1, 50);
    check L25() else D9();
  D7():
    deopt 25 [r10];
  D9():
    deopt 32 [r11];
  L23():
    goto L3(r10);
  L25():
    st k = r11;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L4(r13):
    st ind = r13;
    lapply = ldf lapply;
    check L45() else D19();
  L26():
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L27():
    r12 = dyn base2(<lang rep.int(seq_len(k), rep.int(50, k))>, <lang rep.int(`+`(k, 1), `%%`(n, 50))>);
    goto L4(r12);
  D19():
    deopt 69 [];
  L5(r15):
    sym6 = ldf `rep.int`;
    base6 = ldf `rep.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L38() else L39();
  L28():
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  L29():
    r14 = dyn base3(<lang seq_len(k)>, <lang rep.int(50, k)>);
    goto L5(r14);
  L45():
    p3 = prom<V +>{
      split = ldf split;
      p1 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      p2 = prom<V +>{
        ind = ld ind;
        ind1 = force? ind;
        checkMissing(ind1);
        return ind1;
      };
      r31 = dyn split(p1, p2);
      return r31;
    };
    p4 = prom<V +>{
      r33 = clos inner1236783023;
      return r33;
    };
    r35 = dyn lapply(p3, p4);
    check L46() else D20();
  D20():
    deopt 72 [r35];
  L6(r17):
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L33() else L34();
  L8(r24):
    c2 = ldf c in base;
    r28 = dyn c2(r15, r24);
    check L44() else D18();
  L30():
    k = ld k;
    check L32() else D10();
  L31():
    r16 = dyn base4(<sym k>);
    goto L6(r16);
  L38():
    k4 = ld k;
    check L40() else D14();
  L39():
    r23 = dyn base6(<lang `+`(k, 1)>, <lang `%%`(n, 50)>);
    goto L8(r23);
  L46():
    st y = r35;
    Reduce = ldf Reduce;
    check L47() else D21();
  D10():
    deopt 39 [k];
  D14():
    deopt 53 [k4];
  D18():
    deopt 66 [r28];
  D21():
    deopt 75 [];
  L7(r20):
    rep_int1 = ldf `rep.int` in base;
    r22 = dyn rep_int1(r17, r20);
    check L37() else D13();
  L32():
    k1 = force? k;
    checkMissing(k1);
    r18 = seq_len(k1);
    goto L6(r18);
  L33():
    k2 = ld k;
    check L35() else D11();
  L34():
    r19 = dyn base5(50, <sym k>);
    goto L7(r19);
  L40():
    k5 = force? k4;
    checkMissing(k5);
    r25 = `+`(k5, 1);
    n2 = ld n;
    check L41() else D15();
  L44():
    goto L4(r28);
  L47():
    p5 = prom<V +>{
      c3 = ld c;
      c4 = force? c3;
      checkMissing(c4);
      return c4;
    };
    p6 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r38 = dyn Reduce(p5, p6);
    check L48() else D22();
  D11():
    deopt 45 [k2];
  D13():
    deopt 50 [r22];
  D15():
    deopt 58 [n2];
  D22():
    deopt 78 [r38];
  L35():
    k3 = force? k2;
    checkMissing(k3);
    rep_int = ldf `rep.int` in base;
    r21 = dyn rep_int(50, k3);
    check L36() else D12();
  L37():
    goto L5(r22);
  L41():
    n3 = force? n2;
    checkMissing(n3);
    __ = ldf `%%` in base;
    r26 = dyn __(n3, 50);
    check L42() else D16();
  L48():
    c5 = `is.object`(r38);
    if c5 then L49() else L50(r38);
  D12():
    deopt 48 [r21];
  D16():
    deopt 62 [r26];
  L9(dx3):
    popenv;
    return dx3;
  L36():
    goto L7(r21);
  L42():
    rep_int2 = ldf `rep.int` in base;
    r27 = dyn rep_int2(r25, r26);
    check L43() else D17();
  L49():
    dr2 = tryDispatchBuiltin.1("[", r38);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L51() else L50(dr2);
  L50(r40):
    x11 = ld x;
    check L52() else D23();
  D17():
    deopt 64 [r27];
  D23():
    deopt 79 [r40, x11];
  L43():
    goto L8(r27);
  L51():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L52():
    x12 = force? x11;
    __1 = ldf `[` in base;
    r41 = dyn __1(r40, x12);
    goto L9(r41);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg URLencode:cls, reg sprintf:cls, reg paste:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg verbose:*, reg verbose1:V, reg c:L, reg message:cls, reg sprintf1:cls, reg q:*, reg q1:V, reg p3:p(V +), reg r7:V, reg p4:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg list:cls, reg r13:V, reg __:cls, reg r14:V, reg r15:cls, reg paste1:cls, reg q2:*, reg q3:V, reg p5:p(V +), reg u:*, reg u1:V, reg p6:p(V +), reg r18:V, reg p7:p(V +), reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg v:*, reg v1:V, reg w:*, reg w1:V, reg c1:L, reg w3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r23:V, reg c2:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r24:V, reg c3:cls, reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg w4:*, reg w5:V, reg c4:L, reg w7:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r28:V, reg c5:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg r29:V, reg c6:V, reg c7:L, reg paste2:cls, reg URLencode1:cls, reg u2:*, reg u3:V, reg p8:p(V +), reg r32:V, reg p9:p(V +), reg r34:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p10:p(V +), reg lapply:cls, reg v2:*, reg v3:V, reg p11:p(V +), reg r37:cls, reg p12:p(V +), reg r39:V, reg p13:p(V +), reg r41:V, reg lapply1:cls, reg split:cls, reg v4:*, reg v5:V, reg c8:L, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg __1:cls, reg r42:V, reg p14:p(V +), reg unlist:cls, reg v8:*, reg v9:V, reg c9:L, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg __2:cls, reg r44:V, reg p15:p(V +), reg r46:V, reg p16:p(V +), reg r48:V, reg p17:p(V +), reg unlist1:*, reg unlist2:V, reg p18:p(V +), reg r51:V |
    mkenv;
    st s = s;
    URLencode = ldf URLencode;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p2 = prom<V +>{
      sprintf = ldf sprintf;
      p1 = prom<V +>{
        paste = ldf paste;
        p = prom<V +>{
          s1 = ld s;
          s2 = force? s1;
          checkMissing(s2);
          return s2;
        };
        r1 = dyn paste[, collapse](p, "|");
        return r1;
      };
      r3 = dyn sprintf("https://en.wiktionary.org/w/api.php?action=query&prop=categories&format=json&cllimit=20&titles=%s", p1);
      return r3;
    };
    r5 = dyn URLencode(p2);
    check L10() else D1();
  D1():
    deopt 3 [r5];
  L10():
    st q = r5;
    verbose = ld verbose;
    check L11() else D2();
  D2():
    deopt 5 [verbose];
  L11():
    verbose1 = force? verbose;
    checkMissing(verbose1);
    c = `as.logical`(verbose1);
    if c then L12() else L0();
  L0():
    goto L1();
  L1():
    st u = "";
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L12():
    message = ldf message;
    check L13() else D3();
  D3():
    deopt 8 [];
  L2(r12):
    st v = r12;
    goto L8();
  L13():
    p4 = prom<V +>{
      sprintf1 = ldf sprintf;
      p3 = prom<V +>{
        q = ld q;
        q1 = force? q;
        checkMissing(q1);
        return q1;
      };
      r7 = dyn sprintf1("Performing query %s", p3);
      return r7;
    };
    r9 = dyn message(p4);
    check L14() else D4();
  L16():
    list = ldf list in base;
    r13 = dyn list();
    check L18() else D5();
  L17():
    r11 = dyn base();
    goto L2(r11);
  D4():
    deopt 10 [r9];
  D5():
    deopt 19 [r13];
  L8():
    __ = ldf `::`;
    check L19() else D6();
  L14():
    goto L1();
  L18():
    goto L2(r13);
  D6():
    deopt 22 [];
  L19():
    r14 = dyn __("jsonlite", "fromJSON");
    check L20() else D7();
  D7():
    deopt 25 [r14];
  L20():
    checkFun.0(r14);
    r15 = r14 as cls;
    p7 = prom<V +>{
      paste1 = ldf paste0;
      p5 = prom<V +>{
        q2 = ld q;
        q3 = force? q2;
        checkMissing(q3);
        return q3;
      };
      p6 = prom<V +>{
        u = ld u;
        u1 = force? u;
        checkMissing(u1);
        return u1;
      };
      r18 = dyn paste1(p5, p6);
      return r18;
    };
    r20 = dyn r15(p7);
    check L21() else D8();
  D8():
    deopt 28 [r20];
  L21():
    st w = r20;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L3(r22):
    st v = r22;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L22():
    v = ld v;
    check L24() else D9();
  L23():
    r21 = dyn base1(<sym v>, <lang `$`(`$`(w, query), pages)>);
    goto L3(r21);
  D9():
    deopt 32 [v];
  L4(r27):
    c7 = `as.logical`(r27);
    if c7 then L46() else L5();
  L24():
    v1 = force? v;
    checkMissing(v1);
    w = ld w;
    check L25() else D10();
  L35():
    w4 = ld w;
    check L37() else D12();
  L36():
    r26 = dyn base2(<lang `<-`(u, `$`(`$`(w, continue), clcontinue))>);
    goto L4(r26);
  D10():
    deopt 34 [w];
  D12():
    deopt 42 [w4];
  L5():
    paste2 = ldf paste0;
    check L49() else D13();
  L25():
    w1 = force? w;
    checkMissing(w1);
    c1 = `is.object`(w1);
    if c1 then L27() else L28(w1);
  L37():
    w5 = force? w4;
    checkMissing(w5);
    c4 = `is.object`(w5);
    if c4 then L39() else L40(w5);
  L46():
    do_call = ldf `do.call`;
    check L52() else D15();
  D13():
    deopt 53 [];
  D15():
    deopt 62 [];
  L26(dx1):
    c2 = `is.object`(dx1);
    if c2 then L31() else L32(dx1);
  L27():
    dr = tryDispatchBuiltin.1("$", w1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(w3):
    r23 = `$`(w3, <sym query>);
    goto L26(r23);
  L38(dx7):
    c5 = `is.object`(dx7);
    if c5 then L43() else L44(dx7);
  L39():
    dr4 = tryDispatchBuiltin.1("$", w5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L41() else L40(dr4);
  L40(w7):
    r28 = `$`(w7, <sym continue>);
    goto L38(r28);
  L49():
    p9 = prom<V +>{
      URLencode1 = ldf URLencode;
      p8 = prom<V +>{
        u2 = ld u;
        u3 = force? u2;
        checkMissing(u3);
        return u3;
      };
      r32 = dyn URLencode1(p8);
      return r32;
    };
    r34 = dyn paste2("&clcontinue=", p9);
    check L50() else D14();
  L52():
    p10 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p13 = prom<V +>{
      lapply = ldf lapply;
      p11 = prom<V +>{
        v2 = ld v;
        v3 = force? v2;
        checkMissing(v3);
        return v3;
      };
      p12 = prom<V +>{
        r37 = clos inner3708401697;
        return r37;
      };
      r39 = dyn lapply(p11, p12);
      return r39;
    };
    r41 = dyn do_call(p10, p13);
    check L53() else D16();
  D14():
    deopt 56 [r34];
  D16():
    deopt 65 [r41];
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L26(dx);
  L30(dx5):
    c3 = ldf c in base;
    r25 = dyn c3(v1, dx5);
    check L34() else D11();
  L31():
    dr2 = tryDispatchBuiltin.1("$", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(dr2);
  L32(dx3):
    r24 = `$`(dx3, <sym pages>);
    goto L30(r24);
  L41():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L38(dx6);
  L42(dx11):
    st u = dx11;
    c6 = `==`(dx11, NULL);
    goto L4(c6);
  L43():
    dr6 = tryDispatchBuiltin.1("$", dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L45() else L44(dr6);
  L44(dx9):
    r29 = `$`(dx9, <sym clcontinue>);
    goto L42(r29);
  L50():
    st u = r34;
    goto L8();
  L53():
    st v = r41;
    lapply1 = ldf lapply;
    check L54() else D17();
  D11():
    deopt 39 [r25];
  D17():
    deopt 68 [];
  L33():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L30(dx4);
  L34():
    goto L3(r25);
  L45():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L42(dx10);
  L54():
    p17 = prom<V +>{
      split = ldf split;
      p14 = prom<V +>{
        v4 = ld v;
        v5 = force? v4;
        checkMissing(v5);
        c8 = `is.object`(v5);
        if c8 then L1() else L2();
      L0(dx13):
        return dx13;
      L1():
        dr8 = tryDispatchBuiltin.1("[", v5);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2();
      L2():
        __1 = ldf `[` in base;
        r42 = dyn __1(v5, <missing>, 2);
        goto L0(r42);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx12);
      };
      p16 = prom<V +>{
        unlist = ldf unlist;
        p15 = prom<V +>{
          v8 = ld v;
          v9 = force? v8;
          checkMissing(v9);
          c9 = `is.object`(v9);
          if c9 then L1() else L2();
        L0(dx15):
          return dx15;
        L1():
          dr10 = tryDispatchBuiltin.1("[", v9);
          dc5 = getTryDispatchBuiltinDispatched(dr10);
          if dc5 then L3() else L2();
        L2():
          __2 = ldf `[` in base;
          r44 = dyn __2(v9, <missing>, 1);
          goto L0(r44);
        L3():
          dx14 = getTryDispatchBuiltinValue(dr10);
          goto L0(dx14);
        };
        r46 = dyn unlist[, `use.names`](p15, FALSE);
        return r46;
      };
      r48 = dyn split(p14, p16);
      return r48;
    };
    p18 = prom<V +>{
      unlist1 = ld unlist;
      unlist2 = force? unlist1;
      checkMissing(unlist2);
      return unlist2;
    };
    r51 = dyn lapply1[, , `use.names`](p17, p18, FALSE);
    check L55() else D18();
  D18():
    deopt 73 [r51];
  L55():
    popenv;
    return r51;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg e5:*, reg e6:V, reg c1:L, reg e8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r3:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r4:V, reg list:cls, reg r5:V |
    mkenv;
    st e = e;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    e1 = ld e;
    check L3() else D0();
  L2():
    r = dyn base(<lang `$`(e, title)>, <lang `$`(`$`(e, categories), title)>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L3():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.object`(e2);
    if c then L5() else L6(e2);
  L4(dx1):
    e5 = ld e;
    check L8() else D1();
  L5():
    dr = tryDispatchBuiltin.1("$", e2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(e4):
    r2 = `$`(e4, <sym title>);
    goto L4(r2);
  D1():
    deopt 5 [e5];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L8():
    e6 = force? e5;
    checkMissing(e6);
    c1 = `is.object`(e6);
    if c1 then L10() else L11(e6);
  L9(dx3):
    c2 = `is.object`(dx3);
    if c2 then L14() else L15(dx3);
  L10():
    dr2 = tryDispatchBuiltin.1("$", e6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(dr2);
  L11(e8):
    r3 = `$`(e8, <sym categories>);
    goto L9(r3);
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L13(dx7):
    list = ldf list in base;
    r5 = dyn list(dx1, dx7);
    check L17() else D2();
  L14():
    dr4 = tryDispatchBuiltin.1("$", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L16() else L15(dr4);
  L15(dx5):
    r4 = `$`(dx5, <sym title>);
    goto L13(r4);
  D2():
    deopt 10 [r5];
  L16():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx6);
  L17():
    goto L0(r5);
  }
}