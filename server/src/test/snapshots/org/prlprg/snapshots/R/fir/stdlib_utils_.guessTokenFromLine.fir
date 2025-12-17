fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1642865992;
    st `.guessTokenFromLine` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1642865992(linebuffer, end, update) {
  (reg linebuffer:*, reg end:*, reg update:*) -+> V { var linebuffer:*, reg linebuffer_isMissing:L, reg linebuffer_orDefault:*, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c:L, reg _CompletionEnv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), var end:*, reg end_isMissing:L, reg end_orDefault:*, reg _CompletionEnv4:*, reg _CompletionEnv5:V, reg c1:L, reg _CompletionEnv7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r2:V, reg p1:p(V +), var update:*, reg update_isMissing:L, reg update_orDefault:*, reg substr:cls, reg linebuffer1:*, reg linebuffer2:V, reg p2:p(V +), reg end1:*, reg end2:V, reg p3:p(V +), reg r6:V, reg head_default:cls, reg unlist:cls, reg strsplit:cls, reg linebuffer3:*, reg linebuffer4:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), reg r10:V, reg p6:p(V +), reg _CompletionEnv8:*, reg _CompletionEnv9:V, reg c2:L, reg _CompletionEnv11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r12:V, reg p7:p(V +), reg r14:V, reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg lbss:*, reg lbss1:V, reg r17:V, reg sum:cls, reg r18:V, reg __3:cls, reg r19:V, reg r20:V, reg c3:L, reg c4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg c8:L, reg r22:V, reg lbss2:*, reg lbss3:V, reg r23:V, reg sum1:cls, reg r24:V, reg __4:cls, reg r25:V, reg r26:V, reg c9:L, reg c10:V, reg insideQuotes:*, reg insideQuotes1:V, reg c12:L, reg suppressWarnings:cls, reg gregexpr:cls, reg linebuffer5:*, reg linebuffer6:V, reg p8:p(V +), reg r28:V, reg p9:p(V +), reg r30:V, reg c13:L, reg r32:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __5:cls, reg r33:V, reg dx8:V, reg suppressWarnings1:cls, reg gregexpr1:cls, reg linebuffer7:*, reg linebuffer8:V, reg p10:p(V +), reg r35:V, reg p11:p(V +), reg r37:V, reg c14:L, reg r39:V, reg dr8:V, reg dc4:L, reg dx9:V, reg __6:cls, reg r40:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r41:V, reg r42:V, reg start:*, reg start1:V, reg r43:V, reg all:cls, reg r44:V, reg c15:L, reg r45:V, reg tail_default:cls, reg start2:*, reg start3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r46:V, reg start6:V, reg r47:V, reg start7:*, reg start8:V, reg attr:cls, reg r48:V, reg r49:V, reg p12:p(V +), reg r51:V, reg r52:V, reg substr1:cls, reg linebuffer9:*, reg linebuffer10:V, reg p13:p(V +), reg start9:*, reg start10:V, reg r54:V, reg p14:p(V +), reg end3:*, reg end4:V, reg p15:p(V +), reg r57:V, reg update1:*, reg update2:V, reg c16:L, reg start11:*, reg start12:V, reg l:*, reg c17:L, reg start14:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ____:cls, reg r58:V, reg token:*, reg token1:V, reg l3:*, reg c18:L, reg token3:V, reg l5:*, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg ____1:cls, reg r59:V, reg _CompletionEnv12:*, reg _CompletionEnv13:V, reg c19:L, reg _CompletionEnv15:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __7:cls, reg r60:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r61:V, reg r62:V, reg start17:*, reg start18:V, reg token6:*, reg token7:V, reg list:cls, reg r63:V |
    mkenv;
    linebuffer_isMissing = missing.0(linebuffer);
    if linebuffer_isMissing then L0() else L1(linebuffer);
  L0():
    p = prom<V +>{
      _CompletionEnv = ld `.CompletionEnv`;
      _CompletionEnv1 = force? _CompletionEnv;
      checkMissing(_CompletionEnv1);
      c = `is.object`(_CompletionEnv1);
      if c then L1() else L2(_CompletionEnv1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", _CompletionEnv1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_CompletionEnv3):
      __ = ldf `[[` in base;
      r = dyn __(_CompletionEnv3, "linebuffer");
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L1(p);
  L1(linebuffer_orDefault):
    st linebuffer = linebuffer_orDefault;
    end_isMissing = missing.0(end);
    if end_isMissing then L2() else L3(end);
  L2():
    p1 = prom<V +>{
      _CompletionEnv4 = ld `.CompletionEnv`;
      _CompletionEnv5 = force? _CompletionEnv4;
      checkMissing(_CompletionEnv5);
      c1 = `is.object`(_CompletionEnv5);
      if c1 then L1() else L2(_CompletionEnv5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", _CompletionEnv5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(_CompletionEnv7):
      __1 = ldf `[[` in base;
      r2 = dyn __1(_CompletionEnv7, "end");
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    goto L3(p1);
  L3(end_orDefault):
    st end = end_orDefault;
    update_isMissing = missing.0(update);
    if update_isMissing then L4(TRUE) else L4(update);
  L4(update_orDefault):
    st update = update_orDefault;
    substr = ldf substr;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    p2 = prom<V +>{
      linebuffer1 = ld linebuffer;
      linebuffer2 = force? linebuffer1;
      checkMissing(linebuffer2);
      return linebuffer2;
    };
    p3 = prom<V +>{
      end1 = ld end;
      end2 = force? end1;
      checkMissing(end2);
      return end2;
    };
    r6 = dyn substr(p2, 1, p3);
    check L20() else D1();
  D1():
    deopt 5 [r6];
  L20():
    st linebuffer = r6;
    head_default = ldf `head.default`;
    check L21() else D2();
  D2():
    deopt 8 [];
  L21():
    p6 = prom<V +>{
      unlist = ldf unlist;
      p5 = prom<V +>{
        strsplit = ldf strsplit;
        p4 = prom<V +>{
          linebuffer3 = ld linebuffer;
          linebuffer4 = force? linebuffer3;
          checkMissing(linebuffer4);
          return linebuffer4;
        };
        r8 = dyn strsplit(p4, "");
        return r8;
      };
      r10 = dyn unlist(p5);
      return r10;
    };
    p7 = prom<V +>{
      _CompletionEnv8 = ld `.CompletionEnv`;
      _CompletionEnv9 = force? _CompletionEnv8;
      checkMissing(_CompletionEnv9);
      c2 = `is.object`(_CompletionEnv9);
      if c2 then L1() else L2(_CompletionEnv9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", _CompletionEnv9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(_CompletionEnv11):
      __2 = ldf `[[` in base;
      r12 = dyn __2(_CompletionEnv11, "end");
      goto L0(r12);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r14 = dyn head_default(p6, p7);
    check L22() else D3();
  D3():
    deopt 11 [r14];
  L22():
    st lbss = r14;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L5(r16):
    __3 = ldf `%%` in base;
    r19 = dyn __3(r16, 2.0);
    check L27() else D6();
  L23():
    lbss = ld lbss;
    check L25() else D4();
  L24():
    r15 = dyn base(<lang `==`(lbss, "'")>);
    goto L5(r15);
  D4():
    deopt 16 [lbss];
  D6():
    deopt 24 [r19];
  L25():
    lbss1 = force? lbss;
    checkMissing(lbss1);
    r17 = `==`(lbss1, "'");
    sum = ldf sum in base;
    r18 = dyn sum(r17);
    check L26() else D5();
  L27():
    r20 = `==`(r19, 1.0);
    c3 = `as.logical`(r20);
    if c3 then L6(c3) else L28();
  D5():
    deopt 21 [r18];
  L6(c4):
    st insideQuotes = c4;
    insideQuotes = ld insideQuotes;
    check L35() else D10();
  L26():
    goto L5(r18);
  L28():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  D10():
    deopt 43 [insideQuotes];
  L7(c8, r22):
    __4 = ldf `%%` in base;
    r25 = dyn __4(r22, 2.0);
    check L33() else D9();
  L29():
    lbss2 = ld lbss;
    check L31() else D7();
  L30():
    r21 = dyn base1(<lang `==`(lbss, "\"")>);
    goto L7(c3, r21);
  L35():
    insideQuotes1 = force? insideQuotes;
    checkMissing(insideQuotes1);
    c12 = `as.logical`(insideQuotes1);
    if c12 then L36() else L8();
  D7():
    deopt 30 [c3, lbss2];
  D9():
    deopt 38 [c8, r25];
  L8():
    suppressWarnings1 = ldf suppressWarnings;
    check L43() else D13();
  L10(dx8):
    st start = dx8;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L31():
    lbss3 = force? lbss2;
    checkMissing(lbss3);
    r23 = `==`(lbss3, "\"");
    sum1 = ldf sum in base;
    r24 = dyn sum1(r23);
    check L32() else D8();
  L33():
    r26 = `==`(r25, 1.0);
    c9 = `as.logical`(r26);
    c10 = `||`(c8, c9);
    goto L6(c10);
  L36():
    suppressWarnings = ldf suppressWarnings;
    check L37() else D11();
  D8():
    deopt 35 [c3, r24];
  D11():
    deopt 46 [];
  D13():
    deopt 53 [];
  L11(r42):
    c15 = `as.logical`(r42);
    if c15 then L52() else L12();
  L32():
    goto L7(c3, r24);
  L37():
    p9 = prom<V +>{
      gregexpr = ldf gregexpr;
      p8 = prom<V +>{
        linebuffer5 = ld linebuffer;
        linebuffer6 = force? linebuffer5;
        checkMissing(linebuffer6);
        return linebuffer6;
      };
      r28 = dyn gregexpr[, , perl]("['\"]", p8, TRUE);
      return r28;
    };
    r30 = dyn suppressWarnings(p9);
    check L38() else D12();
  L43():
    p11 = prom<V +>{
      gregexpr1 = ldf gregexpr;
      p10 = prom<V +>{
        linebuffer7 = ld linebuffer;
        linebuffer8 = force? linebuffer7;
        checkMissing(linebuffer8);
        return linebuffer8;
      };
      r35 = dyn gregexpr1[, , perl]("[^\\.\\w:?$@[\\]]+", p10, TRUE);
      return r35;
    };
    r37 = dyn suppressWarnings1(p11);
    check L44() else D14();
  L48():
    start = ld start;
    check L50() else D15();
  L49():
    r41 = dyn base2(<lang `<`(start, 0)>);
    goto L11(r41);
  D12():
    deopt 48 [r30];
  D14():
    deopt 55 [r37];
  D15():
    deopt 62 [start];
  L12():
    tail_default = ldf `tail.default`;
    check L54() else D17();
  L13(r45):
    st start = r45;
    substr1 = ldf substr;
    check L56() else D19();
  L38():
    c13 = `is.object`(r30);
    if c13 then L39() else L40(r30);
  L44():
    c14 = `is.object`(r37);
    if c14 then L45() else L46(r37);
  L50():
    start1 = force? start;
    checkMissing(start1);
    r43 = `<`(start1, 0);
    all = ldf all in base;
    r44 = dyn all(r43);
    check L51() else D16();
  L52():
    goto L13(0);
  D16():
    deopt 67 [r44];
  D17():
    deopt 71 [];
  D19():
    deopt 79 [];
  L9(dx7):
    goto L10(dx7);
  L39():
    dr6 = tryDispatchBuiltin.1("[[", r30);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L41() else L40(dr6);
  L40(r32):
    __5 = ldf `[[` in base;
    r33 = dyn __5(r32, 1);
    goto L9(r33);
  L45():
    dr8 = tryDispatchBuiltin.1("[[", r37);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L47() else L46(dr8);
  L46(r39):
    __6 = ldf `[[` in base;
    r40 = dyn __6(r39, 1);
    goto L10(r40);
  L51():
    goto L11(r44);
  L54():
    p12 = prom<V +>{
      start2 = ld start;
      start3 = force? start2;
      checkMissing(start3);
      sym3 = ldf attr;
      base3 = ldf attr in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(start6, r47):
      r49 = `+`(start6, r47);
      return r49;
    L1():
      start7 = ld start;
      start8 = force? start7;
      checkMissing(start8);
      attr = ldf attr in base;
      r48 = dyn attr(start8, "match.length");
      goto L0(start3, r48);
    L2():
      r46 = dyn base3(<sym start>, "match.length");
      goto L0(start3, r46);
    };
    r51 = dyn tail_default(p12, 1);
    check L55() else D18();
  L56():
    p13 = prom<V +>{
      linebuffer9 = ld linebuffer;
      linebuffer10 = force? linebuffer9;
      checkMissing(linebuffer10);
      return linebuffer10;
    };
    p14 = prom<V +>{
      start9 = ld start;
      start10 = force? start9;
      checkMissing(start10);
      r54 = `+`(start10, 1);
      return r54;
    };
    p15 = prom<V +>{
      end3 = ld end;
      end4 = force? end3;
      checkMissing(end4);
      return end4;
    };
    r57 = dyn substr1(p13, p14, p15);
    check L57() else D20();
  D18():
    deopt 74 [r51];
  D20():
    deopt 83 [r57];
  L41():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L9(dx6);
  L47():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L10(dx9);
  L55():
    r52 = `-`(r51, 1);
    goto L13(r52);
  L57():
    st token = r57;
    update1 = ld update;
    check L58() else D21();
  D21():
    deopt 85 [update1];
  L58():
    update2 = force? update1;
    checkMissing(update2);
    c16 = `as.logical`(update2);
    if c16 then L59() else L14();
  L14():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L73() else L74();
  L59():
    start11 = ld start;
    check L60() else D22();
  D22():
    deopt 87 [start11];
  L18(r62):
    popenv;
    return r62;
  L60():
    start12 = force? start11;
    checkMissing(start12);
    l = ld `.CompletionEnv`;
    c17 = `is.object`(l);
    if c17 then L61() else L62(start12, l);
  L73():
    start17 = ld start;
    check L75() else D25();
  L74():
    r61 = dyn base4[start, token](<sym start>, <sym token>);
    goto L18(r61);
  D25():
    deopt 108 [start17];
  L15(dx11):
    st `.CompletionEnv` = dx11;
    token = ld token;
    check L64() else D23();
  L61():
    dr10 = tryDispatchBuiltin.0("[[<-", l, start12);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L63() else L62(start12, dr10);
  L62(start14, l2):
    ____ = ldf `[[<-` in base;
    r58 = dyn ____(l2, start12, "start");
    goto L15(r58);
  L75():
    start18 = force? start17;
    checkMissing(start18);
    token6 = ld token;
    check L76() else D26();
  D23():
    deopt 94 [token];
  D26():
    deopt 111 [token6];
  L63():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L15(dx10);
  L64():
    token1 = force? token;
    checkMissing(token1);
    l3 = ld `.CompletionEnv`;
    c18 = `is.object`(l3);
    if c18 then L65() else L66(token1, l3);
  L76():
    token7 = force? token6;
    checkMissing(token7);
    list = ldf list in base;
    r63 = dyn list(start18, token7);
    check L77() else D27();
  D27():
    deopt 115 [r63];
  L16(dx13):
    st `.CompletionEnv` = dx13;
    _CompletionEnv12 = ld `.CompletionEnv`;
    check L68() else D24();
  L65():
    dr12 = tryDispatchBuiltin.0("[[<-", l3, token1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L67() else L66(token1, dr12);
  L66(token3, l5):
    ____1 = ldf `[[<-` in base;
    r59 = dyn ____1(l5, token1, "token");
    goto L16(r59);
  L77():
    goto L18(r63);
  D24():
    deopt 101 [_CompletionEnv12];
  L67():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L16(dx12);
  L68():
    _CompletionEnv13 = force? _CompletionEnv12;
    checkMissing(_CompletionEnv13);
    c19 = `is.object`(_CompletionEnv13);
    if c19 then L69() else L70(_CompletionEnv13);
  L17(dx15):
    popenv;
    return dx15;
  L69():
    dr14 = tryDispatchBuiltin.1("[[", _CompletionEnv13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L71() else L70(dr14);
  L70(_CompletionEnv15):
    __7 = ldf `[[` in base;
    r60 = dyn __7(_CompletionEnv15, "token");
    goto L17(r60);
  L71():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L17(dx14);
  }
}