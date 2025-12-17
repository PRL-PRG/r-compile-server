fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_so_symbols` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg split_data_frame:cls, reg x3:*, reg x4:V, reg p:p(V +), reg x5:*, reg x6:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg entries:*, reg entries1:V, reg length1:cls, reg r15:V, reg vector:cls, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg entries2:*, reg entries3:V, reg names:cls, reg r19:V, reg l:*, reg names__:cls, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg x9:*, reg x10:V, reg attr:cls, reg r25:V, reg length2:cls, reg r26:V, reg c2:L, reg objs:*, reg objs1:V, reg l1:*, reg c3:L, reg objs3:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg objs5:V, reg dx3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg objs10:V, reg l6:*, reg objs11:V, reg r28:V, reg objs12:*, reg objs13:V, reg names1:cls, reg r29:V, reg ___:cls, reg r30:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r31:V, reg r32:V, reg gettextf:cls, reg sQuote:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r33:V, reg r34:V, reg x11:*, reg x12:V, reg attr1:cls, reg r35:V, reg p2:p(V +), reg r37:V, reg p3:p(V +), reg r39:V, reg unlist:cls, reg Map:cls, reg r40:cls, reg p4:p(V +), reg entries4:*, reg entries5:V, reg p5:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg entries6:*, reg entries7:V, reg names2:cls, reg r45:V, reg p6:p(V +), reg objects:*, reg objects1:V, reg p7:p(V +), reg r48:V, reg p8:p(V +), reg r50:V, reg c4:cls, reg r51:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L17() else L1();
  L13():
    x1 = ld x;
    check L15() else D0();
  L14():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    split_data_frame = ldf `split.data.frame`;
    check L22() else D4();
  L15():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L16() else D1();
  L17():
    character = ldf character;
    check L18() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L16():
    goto L0(r2);
  L18():
    r4 = dyn character();
    check L19() else D3();
  L22():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r8 = dyn __(x6, <missing>, "osname");
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r10 = dyn split_data_frame(p, p1);
    check L23() else D5();
  D3():
    deopt 9 [r4];
  D5():
    deopt 17 [r10];
  L19():
    popenv;
    return r4;
  L23():
    st entries = r10;
    sym1 = ldf vector;
    base1 = ldf vector in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L3(r12):
    st objects = r12;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L24():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L25():
    r11 = dyn base1("list", <lang length(entries)>);
    goto L3(r11);
  L4(r14):
    vector = ldf vector in base;
    r16 = dyn vector("list", r14);
    check L30() else D8();
  L5(r18):
    l = ld objects;
    names__ = ldf `names<-`;
    check L35() else D11();
  L26():
    entries = ld entries;
    check L28() else D6();
  L27():
    r13 = dyn base2(<sym entries>);
    goto L4(r13);
  L31():
    entries2 = ld entries;
    check L33() else D9();
  L32():
    r17 = dyn base3(<sym entries>);
    goto L5(r17);
  D6():
    deopt 24 [entries];
  D8():
    deopt 29 [r16];
  D9():
    deopt 33 [entries2];
  D11():
    deopt 38 [r18, l, r18];
  L28():
    entries1 = force? entries;
    checkMissing(entries1);
    length1 = ldf length in base;
    r15 = dyn length1(entries1);
    check L29() else D7();
  L30():
    goto L3(r16);
  L33():
    entries3 = force? entries2;
    checkMissing(entries3);
    names = ldf names in base;
    r19 = dyn names(entries3);
    check L34() else D10();
  L35():
    r20 = dyn names__(l, NULL, r18);
    check L36() else D12();
  D7():
    deopt 27 [r15];
  D10():
    deopt 36 [r19];
  D12():
    deopt 40 [r18, r20];
  L29():
    goto L4(r15);
  L34():
    goto L5(r19);
  L36():
    st objects = r20;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L6(r22):
    c2 = `as.logical`(r22);
    if c2 then L44() else L8();
  L37():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L39() else L40();
  L38():
    r21 = dyn base4(<lang `<-`(objs, attr(x, "objects"))>);
    goto L6(r21);
  L7(r24):
    st objs = r24;
    length2 = ldf length in base;
    r26 = dyn length2(r24);
    check L43() else D15();
  L8():
    goto L11();
  L11():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L54() else L55();
  L39():
    x9 = ld x;
    check L41() else D13();
  L40():
    r23 = dyn base5(<sym x>, "objects");
    goto L7(r23);
  L44():
    objs = ld objs;
    check L45() else D16();
  D13():
    deopt 46 [x9];
  D15():
    deopt 53 [r26];
  D16():
    deopt 54 [objs];
  L12(r32):
    popenv;
    return r32;
  L41():
    x10 = force? x9;
    checkMissing(x10);
    attr = ldf attr in base;
    r25 = dyn attr(x10, "objects");
    check L42() else D14();
  L43():
    goto L6(r26);
  L45():
    objs1 = force? objs;
    checkMissing(objs1);
    l1 = ld objects;
    c3 = `is.object`(l1);
    if c3 then L46() else L47(objs1, l1);
  L54():
    gettextf = ldf gettextf;
    check L56() else D19();
  L55():
    r31 = dyn base7(<lang gettextf("File %s:", sQuote(attr(x, "file")))>, <lang unlist(Map(function((u=, v=, w=), c(strwrap(gettextf("Found %s, possibly from %s", sQuote(v), paste(sprintf("%s (%s)", sQuote(`[`(u, , "ssname")), `[`(u, , "language")), collapse=", ")), indent=2, exdent=4), if(`>`(length(w), 1), {
                strwrap(sprintf("Objects: %s", paste(sQuote(w), collapse=", ")), indent=4, exdent=6)
              }, if(length(w), {
                  strwrap(sprintf("Object: %s", sQuote(w)), indent=4, exdent=6)
                }))), NULL), entries, names(entries), objects))>);
    goto L12(r31);
  D14():
    deopt 50 [r25];
  D19():
    deopt 70 [];
  L9(objs5, dx3):
    st objects = dx3;
    goto L11();
  L42():
    goto L7(r25);
  L46():
    dr2 = tryDispatchBuiltin.0("[<-", l1, objs1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L48() else L47(objs1, dr2);
  L47(objs3, l3):
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L49() else L50();
  L56():
    p3 = prom<V +>{
      sQuote = ldf sQuote;
      p2 = prom<V +>{
        sym8 = ldf attr;
        base8 = ldf attr in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r34):
        return r34;
      L1():
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        attr1 = ldf attr in base;
        r35 = dyn attr1(x12, "file");
        goto L0(r35);
      L2():
        r33 = dyn base8(<sym x>, "file");
        goto L0(r33);
      };
      r37 = dyn sQuote(p2);
      return r37;
    };
    r39 = dyn gettextf("File %s:", p3);
    check L57() else D20();
  D20():
    deopt 73 [r39];
  L10(objs10, l6, objs11, r28):
    ___ = ldf `[<-` in base;
    r30 = dyn ___(l6, objs11, r28);
    goto L9(objs10, r30);
  L48():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(objs1, dx2);
  L49():
    objs12 = ld objs;
    check L51() else D17();
  L50():
    r27 = dyn base6(<sym objs>);
    goto L10(objs3, l3, objs1, r27);
  L57():
    unlist = ldf unlist;
    check L58() else D21();
  D17():
    deopt 59 [objs3, l3, objs1, objs12];
  D21():
    deopt 75 [];
  L51():
    objs13 = force? objs12;
    checkMissing(objs13);
    names1 = ldf names in base;
    r29 = dyn names1(objs13);
    check L52() else D18();
  L58():
    p8 = prom<V +>{
      Map = ldf Map;
      p4 = prom<V +>{
        r40 = clos inner2093071602;
        return r40;
      };
      p5 = prom<V +>{
        entries4 = ld entries;
        entries5 = force? entries4;
        checkMissing(entries5);
        return entries5;
      };
      p6 = prom<V +>{
        sym9 = ldf names;
        base9 = ldf names in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r44):
        return r44;
      L1():
        entries6 = ld entries;
        entries7 = force? entries6;
        checkMissing(entries7);
        names2 = ldf names in base;
        r45 = dyn names2(entries7);
        goto L0(r45);
      L2():
        r43 = dyn base9(<sym entries>);
        goto L0(r43);
      };
      p7 = prom<V +>{
        objects = ld objects;
        objects1 = force? objects;
        checkMissing(objects1);
        return objects1;
      };
      r48 = dyn Map(p4, p5, p6, p7);
      return r48;
    };
    r50 = dyn unlist(p8);
    check L59() else D22();
  D18():
    deopt 62 [objs3, l3, objs1, r29];
  D22():
    deopt 77 [r50];
  L52():
    goto L10(objs3, l3, objs1, r29);
  L59():
    c4 = ldf c in base;
    r51 = dyn c4(r39, r50);
    check L60() else D23();
  D23():
    deopt 79 [r51];
  L60():
    goto L12(r51);
  }
}
fun inner2093071602(u, v, w) {
  (reg u:*, reg v:*, reg w:*) -+> V { var u:*, var v:*, var w:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg strwrap:cls, reg gettextf:cls, reg sQuote:cls, reg v1:*, reg v2:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg paste:cls, reg sprintf:cls, reg sQuote1:cls, reg u1:*, reg u2:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg u5:*, reg u6:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r9:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg r15:V, reg p7:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg w1:*, reg w2:V, reg length:cls, reg r20:V, reg r21:V, reg c2:L, reg strwrap1:cls, reg sprintf1:cls, reg paste1:cls, reg sQuote2:cls, reg w3:*, reg w4:V, reg p8:p(V +), reg r23:V, reg p9:p(V +), reg r25:V, reg p10:p(V +), reg r27:V, reg p11:p(V +), reg r29:V, reg r30:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg w5:*, reg w6:V, reg length1:cls, reg r33:V, reg c3:L, reg strwrap2:cls, reg sprintf2:cls, reg sQuote3:cls, reg w7:*, reg w8:V, reg p12:p(V +), reg r35:V, reg p13:p(V +), reg r37:V, reg p14:p(V +), reg r39:V, reg c4:cls, reg r40:V |
    mkenv;
    st u = u;
    st v = v;
    st w = w;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    popenv;
    return r1;
  L6():
    strwrap = ldf strwrap;
    check L8() else D0();
  L7():
    r = dyn base(<lang strwrap(gettextf("Found %s, possibly from %s", sQuote(v), paste(sprintf("%s (%s)", sQuote(`[`(u, , "ssname")), `[`(u, , "language")), collapse=", ")), indent=2, exdent=4)>, <lang if(`>`(length(w), 1), {
        strwrap(sprintf("Objects: %s", paste(sQuote(w), collapse=", ")), indent=4, exdent=6)
      }, if(length(w), {
          strwrap(sprintf("Object: %s", sQuote(w)), indent=4, exdent=6)
        }))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L8():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        sQuote = ldf sQuote;
        p = prom<V +>{
          v1 = ld v;
          v2 = force? v1;
          checkMissing(v2);
          return v2;
        };
        r3 = dyn sQuote(p);
        return r3;
      };
      p6 = prom<V +>{
        paste = ldf paste;
        p5 = prom<V +>{
          sprintf = ldf sprintf;
          p3 = prom<V +>{
            sQuote1 = ldf sQuote;
            p2 = prom<V +>{
              u1 = ld u;
              u2 = force? u1;
              checkMissing(u2);
              c = `is.object`(u2);
              if c then L1() else L2();
            L0(dx1):
              return dx1;
            L1():
              dr = tryDispatchBuiltin.1("[", u2);
              dc = getTryDispatchBuiltinDispatched(dr);
              if dc then L3() else L2();
            L2():
              __ = ldf `[` in base;
              r5 = dyn __(u2, <missing>, "ssname");
              goto L0(r5);
            L3():
              dx = getTryDispatchBuiltinValue(dr);
              goto L0(dx);
            };
            r7 = dyn sQuote1(p2);
            return r7;
          };
          p4 = prom<V +>{
            u5 = ld u;
            u6 = force? u5;
            checkMissing(u6);
            c1 = `is.object`(u6);
            if c1 then L1() else L2();
          L0(dx3):
            return dx3;
          L1():
            dr2 = tryDispatchBuiltin.1("[", u6);
            dc1 = getTryDispatchBuiltinDispatched(dr2);
            if dc1 then L3() else L2();
          L2():
            __1 = ldf `[` in base;
            r9 = dyn __1(u6, <missing>, "language");
            goto L0(r9);
          L3():
            dx2 = getTryDispatchBuiltinValue(dr2);
            goto L0(dx2);
          };
          r11 = dyn sprintf("%s (%s)", p3, p4);
          return r11;
        };
        r13 = dyn paste[, collapse](p5, ", ");
        return r13;
      };
      r15 = dyn gettextf("Found %s, possibly from %s", p1, p6);
      return r15;
    };
    r17 = dyn strwrap[, indent, exdent](p7, 2, 4);
    check L9() else D1();
  D1():
    deopt 9 [r17];
  L9():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L1(r19):
    r21 = `>`(r19, 1);
    c2 = `as.logical`(r21);
    if c2 then L14() else L2();
  L10():
    w1 = ld w;
    check L12() else D2();
  L11():
    r18 = dyn base1(<sym w>);
    goto L1(r18);
  D2():
    deopt 12 [w1];
  L2():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L3(r30):
    c4 = ldf c in base;
    r40 = dyn c4(r17, r30);
    check L26() else D10();
  L12():
    w2 = force? w1;
    checkMissing(w2);
    length = ldf length in base;
    r20 = dyn length(w2);
    check L13() else D3();
  L14():
    strwrap1 = ldf strwrap;
    check L15() else D4();
  D3():
    deopt 15 [r20];
  D4():
    deopt 19 [];
  D10():
    deopt 43 [r40];
  L4(r32):
    c3 = `as.logical`(r32);
    if c3 then L22() else L5();
  L13():
    goto L1(r20);
  L15():
    p11 = prom<V +>{
      sprintf1 = ldf sprintf;
      p10 = prom<V +>{
        paste1 = ldf paste;
        p9 = prom<V +>{
          sQuote2 = ldf sQuote;
          p8 = prom<V +>{
            w3 = ld w;
            w4 = force? w3;
            checkMissing(w4);
            return w4;
          };
          r23 = dyn sQuote2(p8);
          return r23;
        };
        r25 = dyn paste1[, collapse](p9, ", ");
        return r25;
      };
      r27 = dyn sprintf1("Objects: %s", p10);
      return r27;
    };
    r29 = dyn strwrap1[, indent, exdent](p11, 4, 6);
    check L16() else D5();
  L18():
    w5 = ld w;
    check L20() else D6();
  L19():
    r31 = dyn base2(<sym w>);
    goto L4(r31);
  L26():
    goto L0(r40);
  D5():
    deopt 25 [r29];
  D6():
    deopt 28 [w5];
  L5():
    goto L3(NULL);
  L16():
    goto L3(r29);
  L20():
    w6 = force? w5;
    checkMissing(w6);
    length1 = ldf length in base;
    r33 = dyn length1(w6);
    check L21() else D7();
  L22():
    strwrap2 = ldf strwrap;
    check L23() else D8();
  D7():
    deopt 31 [r33];
  D8():
    deopt 33 [];
  L21():
    goto L4(r33);
  L23():
    p14 = prom<V +>{
      sprintf2 = ldf sprintf;
      p13 = prom<V +>{
        sQuote3 = ldf sQuote;
        p12 = prom<V +>{
          w7 = ld w;
          w8 = force? w7;
          checkMissing(w8);
          return w8;
        };
        r35 = dyn sQuote3(p12);
        return r35;
      };
      r37 = dyn sprintf2("Object: %s", p13);
      return r37;
    };
    r39 = dyn strwrap2[, indent, exdent](p14, 4, 6);
    check L24() else D9();
  D9():
    deopt 39 [r39];
  L24():
    goto L3(r39);
  }
}