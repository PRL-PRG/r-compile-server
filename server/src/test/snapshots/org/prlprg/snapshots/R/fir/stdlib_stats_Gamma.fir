fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1670202577;
    st Gamma = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1670202577(link) {
  (reg link:*) -+> V { var link:*, reg link_isMissing:L, reg link_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg linktemp:*, reg linktemp1:V, reg c:L, reg r5:V, reg c1:L, reg deparse:cls, reg linktemp2:*, reg linktemp3:V, reg p:p(V +), reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg c2:cls, reg r11:V, reg _in_:cls, reg linktemp4:*, reg linktemp5:V, reg p1:p(V +), reg okLinks:*, reg okLinks1:V, reg p2:p(V +), reg r14:V, reg c3:L, reg make_link:cls, reg linktemp6:*, reg linktemp7:V, reg p3:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg link1:*, reg link2:V, reg c4:L, reg c5:L, reg make_link1:cls, reg link3:*, reg link4:V, reg p4:p(V +), reg r21:V, reg link5:*, reg link6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg link7:*, reg link8:V, reg inherits:cls, reg r24:V, reg c6:L, reg link9:*, reg link10:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg stats:*, reg stats1:V, reg c7:L, reg stats3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r27:V, reg c8:V, reg r28:V, reg c9:L, reg stats4:*, reg stats5:V, reg c10:L, reg stats7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r29:V, reg dx4:V, reg stop:cls, reg gettextf:cls, reg linktemp8:*, reg linktemp9:V, reg p5:p(V +), reg family:*, reg family1:V, reg p6:p(V +), reg paste:cls, reg sQuote:cls, reg okLinks2:*, reg okLinks3:V, reg p7:p(V +), reg r33:V, reg p8:p(V +), reg r35:V, reg p9:p(V +), reg r37:V, reg p10:p(V +), reg r39:V, reg r40:cls, reg r41:cls, reg r42:cls, reg r43:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg r45:V, reg expression:cls, reg r46:V, reg r47:cls, reg structure:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg r49:V, reg family2:*, reg family3:V, reg linktemp10:*, reg linktemp11:V, reg stats8:*, reg stats9:V, reg c11:L, reg stats11:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r50:V, reg stats12:*, reg stats13:V, reg c12:L, reg stats15:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r51:V, reg variance:*, reg variance1:V, reg dev_resids:*, reg dev_resids1:V, reg aic:*, reg aic1:V, reg stats16:*, reg stats17:V, reg c13:L, reg stats19:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r52:V, reg initialize:*, reg initialize1:V, reg validmu:*, reg validmu1:V, reg stats20:*, reg stats21:V, reg c14:L, reg stats23:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r53:V, reg simfun:*, reg simfun1:V, reg list:cls, reg r54:V, reg p11:p(V +), reg r56:V |
    mkenv;
    link_isMissing = missing.0(link);
    if link_isMissing then L0("inverse") else L0(link);
  L0(link_orDefault):
    st link = link_orDefault;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L1(r1):
    st linktemp = r1;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L16():
    substitute = ldf substitute in base;
    r2 = dyn substitute(<sym link>);
    goto L1(r2);
  L17():
    r = dyn base(<sym link>);
    goto L1(r);
  L2(r4):
    r5 = `!`(r4);
    c1 = `as.logical`(r5);
    if c1 then L21() else L3();
  L18():
    linktemp = ld linktemp;
    check L20() else D0();
  L19():
    r3 = dyn base1(<sym linktemp>);
    goto L2(r3);
  D0():
    deopt 5 [linktemp];
  L3():
    goto L4();
  L4():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L20():
    linktemp1 = force? linktemp;
    checkMissing(linktemp1);
    c = `is.character`(linktemp1);
    goto L2(c);
  L21():
    deparse = ldf deparse;
    check L22() else D1();
  D1():
    deopt 10 [];
  L5(r10):
    st okLinks = r10;
    st family = "Gamma";
    _in_ = ldf `%in%`;
    check L28() else D4();
  L22():
    p = prom<V +>{
      linktemp2 = ld linktemp;
      linktemp3 = force? linktemp2;
      checkMissing(linktemp3);
      return linktemp3;
    };
    r7 = dyn deparse(p);
    check L23() else D2();
  L25():
    c2 = ldf c in base;
    r11 = dyn c2("inverse", "log", "identity");
    check L27() else D3();
  L26():
    r9 = dyn base2("inverse", "log", "identity");
    goto L5(r9);
  D2():
    deopt 12 [r7];
  D3():
    deopt 22 [r11];
  D4():
    deopt 28 [];
  L23():
    st linktemp = r7;
    goto L4();
  L27():
    goto L5(r11);
  L28():
    p1 = prom<V +>{
      linktemp4 = ld linktemp;
      linktemp5 = force? linktemp4;
      checkMissing(linktemp5);
      return linktemp5;
    };
    p2 = prom<V +>{
      okLinks = ld okLinks;
      okLinks1 = force? okLinks;
      checkMissing(okLinks1);
      return okLinks1;
    };
    r14 = dyn _in_(p1, p2);
    check L29() else D5();
  D5():
    deopt 31 [r14];
  L29():
    c3 = `as.logical`(r14);
    if c3 then L30() else L6();
  L6():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L7():
    r40 = clos inner987613256;
    st variance = r40;
    r41 = clos inner987613256;
    st validmu = r41;
    r42 = clos inner610199266;
    st `dev.resids` = r42;
    r43 = clos inner2639244623;
    st aic = r43;
    sym6 = ldf expression;
    base6 = ldf expression in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  L30():
    make_link = ldf `make.link`;
    check L31() else D6();
  D6():
    deopt 33 [];
  L8(r19):
    c5 = `as.logical`(r19);
    if c5 then L37() else L9();
  L15(r45):
    st initialize = r45;
    r47 = clos inner261532220;
    st simfun = r47;
    structure = ldf structure;
    check L67() else D19();
  L31():
    p3 = prom<V +>{
      linktemp6 = ld linktemp;
      linktemp7 = force? linktemp6;
      checkMissing(linktemp7);
      return linktemp7;
    };
    r16 = dyn make_link(p3);
    check L32() else D7();
  L34():
    link1 = ld link;
    check L36() else D8();
  L35():
    r18 = dyn base3(<sym link>);
    goto L8(r18);
  L65():
    expression = ldf expression in base;
    r46 = dyn expression(<lang {
      if(any(`<=`(y, 0.0)), stop("non-positive values not allowed for the 'Gamma' family"));
      `<-`(n, rep.int(1.0, nobs));
      `<-`(mustart, y)
    }>);
    goto L15(r46);
  L66():
    r44 = dyn base6(<lang {
      if(any(`<=`(y, 0.0)), stop("non-positive values not allowed for the 'Gamma' family"));
      `<-`(n, rep.int(1.0, nobs));
      `<-`(mustart, y)
    }>);
    goto L15(r44);
  D7():
    deopt 35 [r16];
  D8():
    deopt 38 [link1];
  D19():
    deopt 98 [];
  L9():
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L32():
    st stats = r16;
    goto L7();
  L36():
    link2 = force? link1;
    checkMissing(link2);
    c4 = `is.character`(link2);
    goto L8(c4);
  L37():
    make_link1 = ldf `make.link`;
    check L38() else D9();
  L67():
    p11 = prom<V +>{
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      family2 = ld family;
      family3 = force? family2;
      checkMissing(family3);
      linktemp10 = ld linktemp;
      linktemp11 = force? linktemp10;
      checkMissing(linktemp11);
      stats8 = ld stats;
      stats9 = force? stats8;
      checkMissing(stats9);
      c11 = `is.object`(stats9);
      if c11 then L4() else L5(stats9);
    L2():
      r48 = dyn base7[family, link, linkfun, linkinv, variance, `dev.resids`, aic, `mu.eta`, initialize, validmu, valideta, simulate, dispersion](<sym family>, <sym linktemp>, <lang `$`(stats, linkfun)>, <lang `$`(stats, linkinv)>, <sym variance>, <sym dev.resids>, <sym aic>, <lang `$`(stats, mu.eta)>, <sym initialize>, <sym validmu>, <lang `$`(stats, valideta)>, <sym simfun>, NA_REAL);
      goto L0(r48);
    L3(dx6):
      stats12 = ld stats;
      stats13 = force? stats12;
      checkMissing(stats13);
      c12 = `is.object`(stats13);
      if c12 then L8() else L9(stats13);
    L4():
      dr4 = tryDispatchBuiltin.1("$", stats9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(stats11):
      r50 = `$`(stats11, <sym linkfun>);
      goto L3(r50);
    L6():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L3(dx5);
    L7(dx8):
      variance = ld variance;
      variance1 = force? variance;
      checkMissing(variance1);
      dev_resids = ld `dev.resids`;
      dev_resids1 = force? dev_resids;
      checkMissing(dev_resids1);
      aic = ld aic;
      aic1 = force? aic;
      checkMissing(aic1);
      stats16 = ld stats;
      stats17 = force? stats16;
      checkMissing(stats17);
      c13 = `is.object`(stats17);
      if c13 then L12() else L13(stats17);
    L8():
      dr6 = tryDispatchBuiltin.1("$", stats13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L10() else L9(dr6);
    L9(stats15):
      r51 = `$`(stats15, <sym linkinv>);
      goto L7(r51);
    L10():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L7(dx7);
    L11(dx10):
      initialize = ld initialize;
      initialize1 = force? initialize;
      checkMissing(initialize1);
      validmu = ld validmu;
      validmu1 = force? validmu;
      checkMissing(validmu1);
      stats20 = ld stats;
      stats21 = force? stats20;
      checkMissing(stats21);
      c14 = `is.object`(stats21);
      if c14 then L16() else L17(stats21);
    L12():
      dr8 = tryDispatchBuiltin.1("$", stats17);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L14() else L13(dr8);
    L13(stats19):
      r52 = `$`(stats19, <sym mu.eta>);
      goto L11(r52);
    L14():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L11(dx9);
    L15(dx12):
      simfun = ld simfun;
      simfun1 = force? simfun;
      checkMissing(simfun1);
      list = ldf list in base;
      r54 = dyn list(family3, linktemp11, dx6, dx8, variance1, dev_resids1, aic1, dx10, initialize1, validmu1, dx12, simfun1, NA_REAL);
      goto L0(r54);
    L16():
      dr10 = tryDispatchBuiltin.1("$", stats21);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L18() else L17(dr10);
    L17(stats23):
      r53 = `$`(stats23, <sym valideta>);
      goto L15(r53);
    L18():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L15(dx11);
    };
    r56 = dyn structure[, class](p11, "family");
    check L68() else D20();
  D9():
    deopt 42 [];
  D20():
    deopt 102 [r56];
  L10(r23):
    c6 = `as.logical`(r23);
    if c6 then L46() else L11();
  L38():
    p4 = prom<V +>{
      link3 = ld link;
      link4 = force? link3;
      checkMissing(link4);
      return link4;
    };
    r21 = dyn make_link1(p4);
    check L39() else D10();
  L42():
    link7 = ld link;
    check L44() else D12();
  L43():
    r22 = dyn base4(<sym link>, "link-glm");
    goto L10(r22);
  L68():
    popenv;
    return r56;
  D10():
    deopt 44 [r21];
  D12():
    deopt 51 [link7];
  L11():
    stop = ldf stop;
    check L63() else D17();
  L39():
    st stats = r21;
    link5 = ld link;
    check L40() else D11();
  L44():
    link8 = force? link7;
    checkMissing(link8);
    inherits = ldf inherits in base;
    r24 = dyn inherits(link8, "link-glm", FALSE);
    check L45() else D13();
  L46():
    link9 = ld link;
    check L47() else D14();
  D11():
    deopt 46 [link5];
  D13():
    deopt 56 [r24];
  D14():
    deopt 57 [link9];
  D17():
    deopt 73 [];
  L40():
    link6 = force? link5;
    checkMissing(link6);
    st linktemp = link6;
    goto L7();
  L45():
    goto L10(r24);
  L47():
    link10 = force? link9;
    checkMissing(link10);
    st stats = link10;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L63():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        linktemp8 = ld linktemp;
        linktemp9 = force? linktemp8;
        checkMissing(linktemp9);
        return linktemp9;
      };
      p6 = prom<V +>{
        family = ld family;
        family1 = force? family;
        checkMissing(family1);
        return family1;
      };
      p9 = prom<V +>{
        paste = ldf paste;
        p8 = prom<V +>{
          sQuote = ldf sQuote;
          p7 = prom<V +>{
            okLinks2 = ld okLinks;
            okLinks3 = force? okLinks2;
            checkMissing(okLinks3);
            return okLinks3;
          };
          r33 = dyn sQuote(p7);
          return r33;
        };
        r35 = dyn paste[, collapse](p8, ", ");
        return r35;
      };
      r37 = dyn gettextf("link \"%s\" not available for %s family; available links are %s", p5, p6, p9);
      return r37;
    };
    r39 = dyn stop[, domain](p10, NA_LGL);
    check L64() else D18();
  D18():
    deopt 77 [r39];
  L12(r26):
    r28 = `!`(r26);
    c9 = `as.logical`(r28);
    if c9 then L55() else L13();
  L48():
    stats = ld stats;
    check L50() else D15();
  L49():
    r25 = dyn base5(<lang `$`(stats, name)>);
    goto L12(r25);
  L64():
    goto L7();
  D15():
    deopt 61 [stats];
  L13():
    goto L14(NULL);
  L14(dx4):
    goto L7();
  L50():
    stats1 = force? stats;
    checkMissing(stats1);
    c7 = `is.object`(stats1);
    if c7 then L52() else L53(stats1);
  L55():
    stats4 = ld stats;
    check L56() else D16();
  D16():
    deopt 66 [stats4];
  L51(dx1):
    c8 = `==`(dx1, NULL);
    goto L12(c8);
  L52():
    dr = tryDispatchBuiltin.1("$", stats1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L54() else L53(dr);
  L53(stats3):
    r27 = `$`(stats3, <sym name>);
    goto L51(r27);
  L56():
    stats5 = force? stats4;
    checkMissing(stats5);
    c10 = `is.object`(stats5);
    if c10 then L58() else L59(stats5);
  L54():
    dx = getTryDispatchBuiltinValue(dr);
    goto L51(dx);
  L57(dx3):
    st linktemp = dx3;
    goto L14(dx3);
  L58():
    dr2 = tryDispatchBuiltin.1("$", stats5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L60() else L59(dr2);
  L59(stats7):
    r29 = `$`(stats7, <sym name>);
    goto L57(r29);
  L60():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L57(dx2);
  }
}
fun inner987613256(mu) {
  (reg mu:*) -+> V { var mu:*, reg mu1:*, reg mu2:V, reg r:V |
    mkenv;
    st mu = mu;
    mu1 = ld mu;
    check L0() else D0();
  D0():
    deopt 0 [mu1];
  L0():
    mu2 = force? mu1;
    checkMissing(mu2);
    r = `^`(mu2, 2.0);
    popenv;
    return r;
  }
}
fun inner610199266(y, mu, wt) {
  (reg y:*, reg mu:*, reg wt:*) -+> V { var y:*, var mu:*, var wt:*, reg wt1:*, reg wt2:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg r5:V, reg ifelse:cls, reg y1:*, reg y2:V, reg r6:V, reg p:p(V +), reg y3:*, reg y4:V, reg mu1:*, reg mu2:V, reg r8:V, reg p1:p(V +), reg r10:V, reg r11:V, reg y5:*, reg y6:V, reg mu3:*, reg mu4:V, reg r12:V, reg mu5:*, reg mu6:V, reg r13:V, reg r14:V, reg r15:V |
    mkenv;
    st y = y;
    st mu = mu;
    st wt = wt;
    wt1 = ld wt;
    check L1() else D0();
  D0():
    deopt 1 [-2.0, wt1];
  L1():
    wt2 = force? wt1;
    checkMissing(wt2);
    r = `*`(-2.0, wt2);
    sym = ldf log;
    base = ldf log in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r4, r5):
    y5 = ld y;
    check L6() else D3();
  L2():
    ifelse = ldf ifelse;
    check L4() else D1();
  L3():
    r3 = dyn base(<lang ifelse(`==`(y, 0.0), 1.0, `/`(y, mu))>);
    goto L0(r, r3);
  D1():
    deopt 5 [r];
  D3():
    deopt 10 [r4, r5, y5];
  L4():
    p = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      r6 = `==`(y2, 0.0);
      return r6;
    };
    p1 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      mu1 = ld mu;
      mu2 = force? mu1;
      checkMissing(mu2);
      r8 = `/`(y4, mu2);
      return r8;
    };
    r10 = dyn ifelse(p, 1.0, p1);
    check L5() else D2();
  L6():
    y6 = force? y5;
    checkMissing(y6);
    mu3 = ld mu;
    check L7() else D4();
  D2():
    deopt 9 [r, r10];
  D4():
    deopt 11 [r4, r5, y6, mu3];
  L5():
    r11 = log(r10, 2.718281828459045);
    goto L0(r, r11);
  L7():
    mu4 = force? mu3;
    checkMissing(mu4);
    r12 = `-`(y6, mu4);
    mu5 = ld mu;
    check L8() else D5();
  D5():
    deopt 13 [r4, r5, r12, mu5];
  L8():
    mu6 = force? mu5;
    checkMissing(mu6);
    r13 = `/`(r12, mu6);
    r14 = `-`(r5, r13);
    r15 = `*`(r4, r14);
    popenv;
    return r15;
  }
}
fun inner2639244623(y, n, mu, wt, dev) {
  (reg y:*, reg n:*, reg mu:*, reg wt:*, reg dev:*) -+> V { var y:*, var n:*, var mu:*, var wt:*, var dev:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg wt1:*, reg wt2:V, reg sum:cls, reg r2:V, reg dev1:*, reg dev2:V, reg n1:*, reg n2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:R, reg r8:V, reg dgamma:cls, reg y1:*, reg y2:V, reg p:p(V +), reg disp:*, reg disp1:V, reg r10:V, reg p1:p(V +), reg mu1:*, reg mu2:V, reg disp2:*, reg disp3:V, reg r12:V, reg p2:p(V +), reg r14:V, reg wt3:*, reg wt4:V, reg r15:V, reg sum1:cls, reg r16:V, reg r17:V, reg r18:V |
    mkenv;
    st y = y;
    st n = n;
    st mu = mu;
    st wt = wt;
    st dev = dev;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st n = r1;
    dev1 = ld dev;
    check L6() else D2();
  L2():
    wt1 = ld wt;
    check L4() else D0();
  L3():
    r = dyn base(<sym wt>);
    goto L0(r);
  D0():
    deopt 2 [wt1];
  D2():
    deopt 7 [dev1];
  L4():
    wt2 = force? wt1;
    checkMissing(wt2);
    sum = ldf sum in base;
    r2 = dyn sum(wt2);
    check L5() else D1();
  L6():
    dev2 = force? dev1;
    checkMissing(dev2);
    n1 = ld n;
    check L7() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 8 [dev2, n1];
  L5():
    goto L0(r2);
  L7():
    n2 = force? n1;
    checkMissing(n2);
    r3 = `/`(dev2, n2);
    st disp = r3;
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L1(r7, r8):
    r17 = `*`(r7, r8);
    r18 = `+`(r17, 2.0);
    popenv;
    return r18;
  L8():
    dgamma = ldf dgamma;
    check L10() else D4();
  L9():
    r6 = dyn base1(<lang `*`(dgamma(y, `/`(1.0, disp), scale=`*`(mu, disp), log=TRUE), wt)>);
    goto L1(-2.0, r6);
  D4():
    deopt 16 [-2.0];
  L10():
    p = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    p1 = prom<V +>{
      disp = ld disp;
      disp1 = force? disp;
      checkMissing(disp1);
      r10 = `/`(1.0, disp1);
      return r10;
    };
    p2 = prom<V +>{
      mu1 = ld mu;
      mu2 = force? mu1;
      checkMissing(mu2);
      disp2 = ld disp;
      disp3 = force? disp2;
      checkMissing(disp3);
      r12 = `*`(mu2, disp3);
      return r12;
    };
    r14 = dyn dgamma[, , scale, log](p, p1, p2, TRUE);
    check L11() else D5();
  D5():
    deopt 23 [-2.0, r14];
  L11():
    wt3 = ld wt;
    check L12() else D6();
  D6():
    deopt 23 [-2.0, r14, wt3];
  L12():
    wt4 = force? wt3;
    checkMissing(wt4);
    r15 = `*`(r14, wt4);
    sum1 = ldf sum in base;
    r16 = dyn sum1(r15);
    check L13() else D7();
  D7():
    deopt 27 [-2.0, r16];
  L13():
    goto L1(-2.0, r16);
  }
}
fun inner261532220(object, nsim) {
  (reg object:*, reg nsim:*) -+> V { var object:*, var nsim:*, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg wts:*, reg wts1:V, reg r3:V, reg any:cls, reg r4:V, reg c1:L, reg message:cls, reg r5:V, reg fitted:cls, reg object5:*, reg object6:V, reg p:p(V +), reg r8:V, reg __:cls, reg r9:V, reg r10:cls, reg object7:*, reg object8:V, reg p1:p(V +), reg r12:V, reg c2:L, reg r14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg wts2:*, reg wts3:V, reg r16:V, reg rgamma:cls, reg nsim1:*, reg nsim2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg nsim5:V, reg r18:V, reg ftd:*, reg ftd1:V, reg length:cls, reg r19:V, reg r20:V, reg p2:p(V +), reg shape:*, reg shape1:V, reg p3:p(V +), reg shape2:*, reg shape3:V, reg ftd2:*, reg ftd3:V, reg r23:V, reg p4:p(V +), reg r25:V |
    mkenv;
    st object = object;
    st nsim = nsim;
    object1 = ld object;
    check L3() else D0();
  D0():
    deopt 0 [object1];
  L3():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L5() else L6(object2);
  L4(dx1):
    st wts = dx1;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L5():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(object4):
    r = `$`(object4, <sym prior.weights>);
    goto L4(r);
  L0(r2):
    c1 = `as.logical`(r2);
    if c1 then L12() else L1();
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L8():
    wts = ld wts;
    check L10() else D1();
  L9():
    r1 = dyn base(<lang `!=`(wts, 1.0)>);
    goto L0(r1);
  D1():
    deopt 6 [wts];
  L1():
    goto L2();
  L2():
    fitted = ldf fitted;
    check L16() else D5();
  L10():
    wts1 = force? wts;
    checkMissing(wts1);
    r3 = `!=`(wts1, 1.0);
    any = ldf any in base;
    r4 = dyn any(r3);
    check L11() else D2();
  L12():
    message = ldf message;
    check L13() else D3();
  D2():
    deopt 11 [r4];
  D3():
    deopt 13 [];
  D5():
    deopt 19 [];
  L11():
    goto L0(r4);
  L13():
    r5 = dyn message("using weights as shape parameters");
    check L14() else D4();
  L16():
    p = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    r8 = dyn fitted(p);
    check L17() else D6();
  D4():
    deopt 15 [r5];
  D6():
    deopt 21 [r8];
  L14():
    goto L2();
  L17():
    st ftd = r8;
    __ = ldf `::`;
    check L18() else D7();
  D7():
    deopt 24 [];
  L18():
    r9 = dyn __("MASS", "gamma.shape");
    check L19() else D8();
  D8():
    deopt 27 [r9];
  L19():
    checkFun.0(r9);
    r10 = r9 as cls;
    p1 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    r12 = dyn r10(p1);
    check L20() else D9();
  D9():
    deopt 30 [r12];
  L20():
    c2 = `is.object`(r12);
    if c2 then L22() else L23(r12);
  L21(dx3):
    wts2 = ld wts;
    check L25() else D10();
  L22():
    dr2 = tryDispatchBuiltin.1("$", r12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(dr2);
  L23(r14):
    r15 = `$`(r14, <sym alpha>);
    goto L21(r15);
  D10():
    deopt 31 [dx3, wts2];
  L24():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L21(dx2);
  L25():
    wts3 = force? wts2;
    checkMissing(wts3);
    r16 = `*`(dx3, wts3);
    st shape = r16;
    rgamma = ldf rgamma;
    check L26() else D11();
  D11():
    deopt 36 [];
  L26():
    p2 = prom<V +>{
      nsim1 = ld nsim;
      nsim2 = force? nsim1;
      checkMissing(nsim2);
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(nsim5, r18):
      r20 = `*`(nsim5, r18);
      return r20;
    L1():
      ftd = ld ftd;
      ftd1 = force? ftd;
      checkMissing(ftd1);
      length = ldf length in base;
      r19 = dyn length(ftd1);
      goto L0(nsim2, r19);
    L2():
      r17 = dyn base1(<sym ftd>);
      goto L0(nsim2, r17);
    };
    p3 = prom<V +>{
      shape = ld shape;
      shape1 = force? shape;
      checkMissing(shape1);
      return shape1;
    };
    p4 = prom<V +>{
      shape2 = ld shape;
      shape3 = force? shape2;
      checkMissing(shape3);
      ftd2 = ld ftd;
      ftd3 = force? ftd2;
      checkMissing(ftd3);
      r23 = `/`(shape3, ftd3);
      return r23;
    };
    r25 = dyn rgamma[, shape, rate](p2, p3, p4);
    check L27() else D12();
  D12():
    deopt 42 [r25];
  L27():
    popenv;
    return r25;
  }
}