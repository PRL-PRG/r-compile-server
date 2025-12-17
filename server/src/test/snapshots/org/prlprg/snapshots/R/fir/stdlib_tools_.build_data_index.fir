fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4236589335;
    st `.build_data_index` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4236589335(dir, contents) {
  (reg dir:*, reg contents:*) -+> V { var dir:*, var contents:*, reg list_data_in_pkg:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg dataTopics:*, reg dataTopics1:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg matrix:cls, reg r6:V, reg paste0:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg dataTopics2:*, reg dataTopics3:V, reg names:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg l:*, reg names__:cls, reg r14:V, reg unlist:cls, reg dataTopics4:*, reg dataTopics5:V, reg p2:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg datasets:*, reg datasets1:V, reg length1:cls, reg r19:V, reg r20:V, reg c1:L, reg matrix1:cls, reg r21:V, reg sub:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg datasets2:*, reg datasets3:V, reg names1:cls, reg r26:V, reg p3:p(V +), reg r28:V, reg l1:*, reg names__1:cls, reg r29:V, reg sort:cls, reg datasets4:*, reg datasets5:V, reg p4:p(V +), reg r31:V, reg cbind:cls, reg datasets6:*, reg datasets7:V, reg p5:p(V +), reg r33:V, reg l2:*, reg dimnames__:cls, reg r34:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg datasets8:*, reg datasets9:V, reg length2:cls, reg r37:V, reg c2:L, reg c4:V, reg NROW:cls, reg contents1:*, reg contents2:V, reg p6:p(V +), reg r39:V, reg c5:L, reg c6:V, reg c8:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg NROW1:cls, reg contents3:*, reg contents4:V, reg p7:p(V +), reg r45:V, reg r46:I, reg lengths:cls, reg contents5:*, reg contents6:V, reg c9:L, reg contents8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r47:V, reg p8:p(V +), reg r49:V, reg rep_int:cls, reg r50:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg datasets10:*, reg datasets11:V, reg unlist1:cls, reg contents9:*, reg contents10:V, reg c10:L, reg contents12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r53:V, reg p9:p(V +), reg r55:V, reg match:cls, reg r56:V, reg contents13:*, reg contents14:V, reg c11:L, reg contents16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg aliasIndices:*, reg aliasIndices1:V, reg c12:L, reg contents18:V, reg aliasIndices3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg contents20:V, reg dx7:V, reg idx:*, reg idx1:V, reg __:cls, reg r57:V, reg __1:cls, reg r58:V, reg l3:*, reg c13:L, reg dx9:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg dx13:V, reg which:cls, reg idx2:*, reg idx3:V, reg r59:V, reg p10:p(V +), reg r61:V, reg ___:cls, reg r62:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r63:V, reg r64:V, reg datasets12:*, reg datasets13:V, reg length3:cls, reg r65:V, reg c14:L, reg as_vector:cls, reg ifelse:cls, reg datasets14:*, reg datasets15:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r66:V, reg datasets18:V, reg r67:V, reg datasets19:*, reg datasets20:V, reg names2:cls, reg r68:V, reg r69:V, reg p11:p(V +), reg datasets21:*, reg datasets22:V, reg p12:p(V +), reg paste1:cls, reg datasets23:*, reg datasets24:V, reg p13:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r73:V, reg r74:V, reg datasets25:*, reg datasets26:V, reg names3:cls, reg r75:V, reg p14:p(V +), reg r77:V, reg p15:p(V +), reg r79:V, reg p16:p(V +), reg r81:V, reg l6:*, reg c15:L, reg r83:V, reg dr10:V, reg dc5:L, reg dx15:V, reg r85:V, reg dx16:V, reg ___1:cls, reg r86:V, reg dataIndex:*, reg dataIndex1:V |
    mkenv;
    st dir = dir;
    st contents = contents;
    list_data_in_pkg = ldf list_data_in_pkg;
    check L20() else D0();
  D0():
    deopt 1 [];
  L20():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn list_data_in_pkg[dir](p);
    check L21() else D1();
  D1():
    deopt 4 [r1];
  L21():
    st dataTopics = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L0(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L26() else L1();
  L22():
    dataTopics = ld dataTopics;
    check L24() else D2();
  L23():
    r2 = dyn base(<sym dataTopics>);
    goto L0(r2);
  D2():
    deopt 8 [dataTopics];
  L1():
    paste0 = ldf paste0;
    check L31() else D6();
  L24():
    dataTopics1 = force? dataTopics;
    checkMissing(dataTopics1);
    length = ldf length in base;
    r4 = dyn length(dataTopics1);
    check L25() else D3();
  L26():
    matrix = ldf matrix;
    check L27() else D4();
  D3():
    deopt 11 [r4];
  D4():
    deopt 14 [];
  D6():
    deopt 23 [];
  L25():
    goto L0(r4);
  L27():
    r6 = dyn matrix("", 0, 2);
    check L28() else D5();
  L31():
    p1 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      dataTopics2 = ld dataTopics;
      dataTopics3 = force? dataTopics2;
      checkMissing(dataTopics3);
      names = ldf names in base;
      r11 = dyn names(dataTopics3);
      goto L0(r11);
    L2():
      r9 = dyn base1(<sym dataTopics>);
      goto L0(r9);
    };
    r13 = dyn paste0(p1, "/");
    check L32() else D7();
  D5():
    deopt 18 [r6];
  D7():
    deopt 26 [r13];
  L28():
    popenv;
    return r6;
  L32():
    l = ld dataTopics;
    names__ = ldf `names<-`;
    check L33() else D8();
  D8():
    deopt 28 [r13, l, r13];
  L33():
    r14 = dyn names__(l, NULL, r13);
    check L34() else D9();
  D9():
    deopt 30 [r13, r14];
  L34():
    st dataTopics = r14;
    unlist = ldf unlist;
    check L35() else D10();
  D10():
    deopt 33 [];
  L35():
    p2 = prom<V +>{
      dataTopics4 = ld dataTopics;
      dataTopics5 = force? dataTopics4;
      checkMissing(dataTopics5);
      return dataTopics5;
    };
    r16 = dyn unlist(p2);
    check L36() else D11();
  D11():
    deopt 35 [r16];
  L36():
    st datasets = r16;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L3(r18):
    r20 = `!`(r18);
    c1 = `as.logical`(r20);
    if c1 then L41() else L4();
  L37():
    datasets = ld datasets;
    check L39() else D12();
  L38():
    r17 = dyn base2(<sym datasets>);
    goto L3(r17);
  D12():
    deopt 39 [datasets];
  L4():
    sub = ldf sub;
    check L46() else D16();
  L39():
    datasets1 = force? datasets;
    checkMissing(datasets1);
    length1 = ldf length in base;
    r19 = dyn length1(datasets1);
    check L40() else D13();
  L41():
    matrix1 = ldf matrix;
    check L42() else D14();
  D13():
    deopt 42 [r19];
  D14():
    deopt 45 [];
  D16():
    deopt 54 [];
  L40():
    goto L3(r19);
  L42():
    r21 = dyn matrix1("", 0, 2);
    check L43() else D15();
  L46():
    p3 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      datasets2 = ld datasets;
      datasets3 = force? datasets2;
      checkMissing(datasets3);
      names1 = ldf names in base;
      r26 = dyn names1(datasets3);
      goto L0(r26);
    L2():
      r24 = dyn base3(<sym datasets>);
      goto L0(r24);
    };
    r28 = dyn sub("/[^/]*$", "", p3);
    check L47() else D17();
  D15():
    deopt 49 [r21];
  D17():
    deopt 58 [r28];
  L43():
    popenv;
    return r21;
  L47():
    l1 = ld datasets;
    names__1 = ldf `names<-`;
    check L48() else D18();
  D18():
    deopt 60 [r28, l1, r28];
  L48():
    r29 = dyn names__1(l1, NULL, r28);
    check L49() else D19();
  D19():
    deopt 62 [r28, r29];
  L49():
    st datasets = r29;
    sort = ldf sort;
    check L50() else D20();
  D20():
    deopt 65 [];
  L50():
    p4 = prom<V +>{
      datasets4 = ld datasets;
      datasets5 = force? datasets4;
      checkMissing(datasets5);
      return datasets5;
    };
    r31 = dyn sort(p4);
    check L51() else D21();
  D21():
    deopt 67 [r31];
  L51():
    st datasets = r31;
    cbind = ldf cbind;
    check L52() else D22();
  D22():
    deopt 70 [];
  L52():
    p5 = prom<V +>{
      datasets6 = ld datasets;
      datasets7 = force? datasets6;
      checkMissing(datasets7);
      return datasets7;
    };
    r33 = dyn cbind[, , `deparse.level`](p5, "", 0);
    check L53() else D23();
  D23():
    deopt 75 [r33];
  L53():
    st dataIndex = r33;
    l2 = ld dataIndex;
    dimnames__ = ldf `dimnames<-`;
    check L54() else D24();
  D24():
    deopt 80 [NULL, l2, NULL];
  L54():
    r34 = dyn dimnames__(l2, NULL, NULL);
    check L55() else D25();
  D25():
    deopt 82 [NULL, r34];
  L55():
    st dataIndex = r34;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L6(r36):
    c2 = `as.logical`(r36);
    if c2 then L60() else L7(c2);
  L56():
    datasets8 = ld datasets;
    check L58() else D26();
  L57():
    r35 = dyn base4(<sym datasets>);
    goto L6(r35);
  D26():
    deopt 86 [datasets8];
  L7(c4):
    c8 = `as.logical`(c4);
    if c8 then L64() else L8();
  L58():
    datasets9 = force? datasets8;
    checkMissing(datasets9);
    length2 = ldf length in base;
    r37 = dyn length2(datasets9);
    check L59() else D27();
  L60():
    NROW = ldf NROW;
    check L61() else D28();
  D27():
    deopt 89 [r37];
  D28():
    deopt 91 [c2];
  L8():
    goto L15();
  L15():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L95() else L96();
  L59():
    goto L6(r37);
  L61():
    p6 = prom<V +>{
      contents1 = ld contents;
      contents2 = force? contents1;
      checkMissing(contents2);
      return contents2;
    };
    r39 = dyn NROW(p6);
    check L62() else D29();
  L64():
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L65() else L66();
  D29():
    deopt 93 [c2, r39];
  L9(r41):
    st aliasIndices = r41;
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L74() else L75();
  L16(r64):
    c14 = `as.logical`(r64);
    if c14 then L99() else L17();
  L62():
    c5 = `as.logical`(r39);
    c6 = `&&`(c2, c5);
    goto L7(c6);
  L65():
    sym6 = ldf seq_len;
    base6 = ldf seq_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L67() else L68();
  L66():
    r40 = dyn base5(<lang seq_len(NROW(contents))>, <lang lengths(`$`(contents, Aliases))>);
    goto L9(r40);
  L95():
    datasets12 = ld datasets;
    check L97() else D44();
  L96():
    r63 = dyn base8(<sym datasets>);
    goto L16(r63);
  D44():
    deopt 144 [datasets12];
  L10(r43):
    lengths = ldf lengths;
    check L71() else D32();
  L11(r52):
    st idx = r52;
    contents13 = ld contents;
    check L80() else D39();
  L17():
    goto L19();
  L19():
    dataIndex = ld dataIndex;
    check L106() else D48();
  L67():
    NROW1 = ldf NROW;
    check L69() else D30();
  L68():
    r42 = dyn base6(<lang NROW(contents)>);
    goto L10(r42);
  L74():
    datasets10 = ld datasets;
    check L76() else D35();
  L75():
    r51 = dyn base7(<sym datasets>, <lang unlist(`$`(contents, Aliases))>, 0);
    goto L11(r51);
  L97():
    datasets13 = force? datasets12;
    checkMissing(datasets13);
    length3 = ldf length in base;
    r65 = dyn length3(datasets13);
    check L98() else D45();
  L99():
    as_vector = ldf `as.vector`;
    check L100() else D46();
  D30():
    deopt 99 [];
  D32():
    deopt 104 [];
  D35():
    deopt 112 [datasets10];
  D39():
    deopt 123 [contents13];
  D45():
    deopt 147 [r65];
  D46():
    deopt 149 [];
  D48():
    deopt 160 [dataIndex];
  L69():
    p7 = prom<V +>{
      contents3 = ld contents;
      contents4 = force? contents3;
      checkMissing(contents4);
      return contents4;
    };
    r45 = dyn NROW1(p7);
    check L70() else D31();
  L71():
    p8 = prom<V +>{
      contents5 = ld contents;
      contents6 = force? contents5;
      checkMissing(contents6);
      c9 = `is.object`(contents6);
      if c9 then L1() else L2(contents6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", contents6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(contents8):
      r47 = `$`(contents8, <sym Aliases>);
      goto L0(r47);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r49 = dyn lengths(p8);
    check L72() else D33();
  L76():
    datasets11 = force? datasets10;
    checkMissing(datasets11);
    unlist1 = ldf unlist;
    check L77() else D36();
  L80():
    contents14 = force? contents13;
    checkMissing(contents14);
    c11 = `is.object`(contents14);
    if c11 then L81() else L82(contents14);
  L98():
    goto L16(r65);
  L100():
    p16 = prom<V +>{
      ifelse = ldf ifelse;
      p11 = prom<V +>{
        datasets14 = ld datasets;
        datasets15 = force? datasets14;
        checkMissing(datasets15);
        sym9 = ldf names;
        base9 = ldf names in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(datasets18, r67):
        r69 = `==`(datasets18, r67);
        return r69;
      L1():
        datasets19 = ld datasets;
        datasets20 = force? datasets19;
        checkMissing(datasets20);
        names2 = ldf names in base;
        r68 = dyn names2(datasets20);
        goto L0(datasets15, r68);
      L2():
        r66 = dyn base9(<sym datasets>);
        goto L0(datasets15, r66);
      };
      p12 = prom<V +>{
        datasets21 = ld datasets;
        datasets22 = force? datasets21;
        checkMissing(datasets22);
        return datasets22;
      };
      p15 = prom<V +>{
        paste1 = ldf paste0;
        p13 = prom<V +>{
          datasets23 = ld datasets;
          datasets24 = force? datasets23;
          checkMissing(datasets24);
          return datasets24;
        };
        p14 = prom<V +>{
          sym10 = ldf names;
          base10 = ldf names in base;
          guard10 = `==`.4(sym10, base10);
          if guard10 then L1() else L2();
        L0(r74):
          return r74;
        L1():
          datasets25 = ld datasets;
          datasets26 = force? datasets25;
          checkMissing(datasets26);
          names3 = ldf names in base;
          r75 = dyn names3(datasets26);
          goto L0(r75);
        L2():
          r73 = dyn base10(<sym datasets>);
          goto L0(r73);
        };
        r77 = dyn paste1(p13, " (", p14, ")");
        return r77;
      };
      r79 = dyn ifelse(p11, p12, p15);
      return r79;
    };
    r81 = dyn as_vector(p16);
    check L101() else D47();
  L106():
    dataIndex1 = force? dataIndex;
    checkMissing(dataIndex1);
    popenv;
    return dataIndex1;
  D31():
    deopt 101 [r45];
  D33():
    deopt 106 [r49];
  D36():
    deopt 115 [];
  D47():
    deopt 151 [r81];
  L12(dx5):
    l3 = ld dataIndex;
    c13 = `is.object`(l3);
    if c13 then L89() else L90(dx5, l3);
  L70():
    r46 = seq_len(r45);
    goto L10(r46);
  L72():
    rep_int = ldf `rep.int` in base;
    r50 = dyn rep_int(r43, r49);
    check L73() else D34();
  L77():
    p9 = prom<V +>{
      contents9 = ld contents;
      contents10 = force? contents9;
      checkMissing(contents10);
      c10 = `is.object`(contents10);
      if c10 then L1() else L2(contents10);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", contents10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(contents12):
      r53 = `$`(contents12, <sym Aliases>);
      goto L0(r53);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r55 = dyn unlist1(p9);
    check L78() else D37();
  L81():
    dr4 = tryDispatchBuiltin.1("[", contents14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L83() else L82(dr4);
  L82(contents16):
    aliasIndices = ld aliasIndices;
    check L84() else D40();
  L101():
    l6 = ld dataIndex;
    c15 = `is.object`(l6);
    if c15 then L102() else L103(r81);
  D34():
    deopt 108 [r50];
  D37():
    deopt 117 [r55];
  D40():
    deopt 125 [contents16, aliasIndices];
  L14(dx12, dx13):
    st dataIndex = dx13;
    goto L15();
  L18(r85, dx16):
    st dataIndex = dx16;
    goto L19();
  L73():
    goto L9(r50);
  L78():
    match = ldf match in base;
    r56 = dyn match(datasets11, r55, 0, NULL);
    check L79() else D38();
  L83():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx4);
  L84():
    aliasIndices1 = force? aliasIndices;
    checkMissing(aliasIndices1);
    c12 = `is.object`(aliasIndices1);
    if c12 then L85() else L86(contents16, aliasIndices1);
  L89():
    dr8 = tryDispatchBuiltin.0("[<-", l3, dx5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L91() else L90(dx5, dr8);
  L90(dx9, l5):
    which = ldf which;
    check L92() else D42();
  L102():
    dr10 = tryDispatchBuiltin.0("[<-", l6, r81);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L104() else L103(r81);
  L103(r83):
    ___1 = ldf `[<-` in base;
    r86 = dyn ___1(l6, <missing>, 1, r81);
    goto L18(r83, r86);
  D38():
    deopt 121 [r56];
  D42():
    deopt 134 [dx9, l5, dx5];
  L13(contents20, dx7):
    __1 = ldf `[` in base;
    r58 = dyn __1(contents20, dx7, "Title");
    goto L12(r58);
  L79():
    goto L11(r56);
  L85():
    dr6 = tryDispatchBuiltin.1("[", aliasIndices1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L87() else L86(contents16, dr6);
  L86(contents18, aliasIndices3):
    idx = ld idx;
    check L88() else D41();
  L91():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L14(dx5, dx11);
  L92():
    p10 = prom<V +>{
      idx2 = ld idx;
      idx3 = force? idx2;
      checkMissing(idx3);
      r59 = `!=`(idx3, 0);
      return r59;
    };
    r61 = dyn which(p10);
    check L93() else D43();
  L104():
    dx15 = getTryDispatchBuiltinValue(dr10);
    goto L18(r81, dx15);
  D41():
    deopt 127 [contents18, aliasIndices3, idx];
  D43():
    deopt 136 [dx9, l5, dx5, r61];
  L87():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L13(contents16, dx6);
  L88():
    idx1 = force? idx;
    __ = ldf `[` in base;
    r57 = dyn __(aliasIndices3, idx1);
    goto L13(contents18, r57);
  L93():
    ___ = ldf `[<-` in base;
    r62 = dyn ___(l5, dx5, r61, 2);
    goto L14(dx9, r62);
  }
}