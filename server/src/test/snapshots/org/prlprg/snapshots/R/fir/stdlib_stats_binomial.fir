fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner399130354;
    st binomial = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner399130354(link) {
  (reg link:*) -+> V { var link:*, reg link_isMissing:L, reg link_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg linktemp:*, reg linktemp1:V, reg c:L, reg r5:V, reg c1:L, reg deparse:cls, reg linktemp2:*, reg linktemp3:V, reg p:p(V +), reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg c2:cls, reg r11:V, reg _in_:cls, reg linktemp4:*, reg linktemp5:V, reg p1:p(V +), reg okLinks:*, reg okLinks1:V, reg p2:p(V +), reg r14:V, reg c3:L, reg make_link:cls, reg linktemp6:*, reg linktemp7:V, reg p3:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg link1:*, reg link2:V, reg c4:L, reg c5:L, reg make_link1:cls, reg link3:*, reg link4:V, reg p4:p(V +), reg r21:V, reg link5:*, reg link6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg link7:*, reg link8:V, reg inherits:cls, reg r24:V, reg c6:L, reg link9:*, reg link10:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg stats:*, reg stats1:V, reg c7:L, reg stats3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r27:V, reg c8:V, reg r28:V, reg c9:L, reg stats4:*, reg stats5:V, reg c10:L, reg stats7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r29:V, reg dx4:V, reg stop:cls, reg gettextf:cls, reg linktemp8:*, reg linktemp9:V, reg p5:p(V +), reg family:*, reg family1:V, reg p6:p(V +), reg paste:cls, reg sQuote:cls, reg okLinks2:*, reg okLinks3:V, reg p7:p(V +), reg r33:V, reg p8:p(V +), reg r35:V, reg p9:p(V +), reg r37:V, reg p10:p(V +), reg r39:V, reg r40:cls, reg r41:cls, reg r42:cls, reg r43:cls, reg r44:cls, reg structure:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg family2:*, reg family3:V, reg linktemp10:*, reg linktemp11:V, reg stats8:*, reg stats9:V, reg c11:L, reg stats11:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r47:V, reg stats12:*, reg stats13:V, reg c12:L, reg stats15:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r48:V, reg variance:*, reg variance1:V, reg dev_resids:*, reg dev_resids1:V, reg aic:*, reg aic1:V, reg stats16:*, reg stats17:V, reg c13:L, reg stats19:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r49:V, reg binomInitialize:cls, reg family4:*, reg family5:V, reg p11:p(V +), reg r51:V, reg validmu:*, reg validmu1:V, reg stats20:*, reg stats21:V, reg c14:L, reg stats23:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r52:V, reg simfun:*, reg simfun1:V, reg list:cls, reg r53:V, reg p12:p(V +), reg r55:V |
    mkenv;
    link_isMissing = missing.0(link);
    if link_isMissing then L0("logit") else L0(link);
  L0(link_orDefault):
    st link = link_orDefault;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L1(r1):
    st linktemp = r1;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L15():
    substitute = ldf substitute in base;
    r2 = dyn substitute(<sym link>);
    goto L1(r2);
  L16():
    r = dyn base(<sym link>);
    goto L1(r);
  L2(r4):
    r5 = `!`(r4);
    c1 = `as.logical`(r5);
    if c1 then L20() else L3();
  L17():
    linktemp = ld linktemp;
    check L19() else D0();
  L18():
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
    if guard2 then L24() else L25();
  L19():
    linktemp1 = force? linktemp;
    checkMissing(linktemp1);
    c = `is.character`(linktemp1);
    goto L2(c);
  L20():
    deparse = ldf deparse;
    check L21() else D1();
  D1():
    deopt 10 [];
  L5(r10):
    st okLinks = r10;
    st family = "binomial";
    _in_ = ldf `%in%`;
    check L27() else D4();
  L21():
    p = prom<V +>{
      linktemp2 = ld linktemp;
      linktemp3 = force? linktemp2;
      checkMissing(linktemp3);
      return linktemp3;
    };
    r7 = dyn deparse(p);
    check L22() else D2();
  L24():
    c2 = ldf c in base;
    r11 = dyn c2("logit", "probit", "cloglog", "cauchit", "log");
    check L26() else D3();
  L25():
    r9 = dyn base2("logit", "probit", "cloglog", "cauchit", "log");
    goto L5(r9);
  D2():
    deopt 12 [r7];
  D3():
    deopt 24 [r11];
  D4():
    deopt 30 [];
  L22():
    st linktemp = r7;
    goto L4();
  L26():
    goto L5(r11);
  L27():
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
    check L28() else D5();
  D5():
    deopt 33 [r14];
  L28():
    c3 = `as.logical`(r14);
    if c3 then L29() else L6();
  L6():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L7():
    r40 = clos inner987613256;
    st variance = r40;
    r41 = clos inner987613256;
    st validmu = r41;
    r42 = clos inner610199266;
    st `dev.resids` = r42;
    r43 = clos inner2639244623;
    st aic = r43;
    r44 = clos inner261532220;
    st simfun = r44;
    structure = ldf structure;
    check L64() else D19();
  L29():
    make_link = ldf `make.link`;
    check L30() else D6();
  D6():
    deopt 35 [];
  D19():
    deopt 96 [];
  L8(r19):
    c5 = `as.logical`(r19);
    if c5 then L36() else L9();
  L30():
    p3 = prom<V +>{
      linktemp6 = ld linktemp;
      linktemp7 = force? linktemp6;
      checkMissing(linktemp7);
      return linktemp7;
    };
    r16 = dyn make_link(p3);
    check L31() else D7();
  L33():
    link1 = ld link;
    check L35() else D8();
  L34():
    r18 = dyn base3(<sym link>);
    goto L8(r18);
  L64():
    p12 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r46):
      return r46;
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
      r45 = dyn base6[family, link, linkfun, linkinv, variance, `dev.resids`, aic, `mu.eta`, initialize, validmu, valideta, simulate, dispersion](<sym family>, <sym linktemp>, <lang `$`(stats, linkfun)>, <lang `$`(stats, linkinv)>, <sym variance>, <sym dev.resids>, <sym aic>, <lang `$`(stats, mu.eta)>, <lang binomInitialize(family)>, <sym validmu>, <lang `$`(stats, valideta)>, <sym simfun>, 1.0);
      goto L0(r45);
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
      r47 = `$`(stats11, <sym linkfun>);
      goto L3(r47);
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
      r48 = `$`(stats15, <sym linkinv>);
      goto L7(r48);
    L10():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L7(dx7);
    L11(dx10):
      binomInitialize = ldf binomInitialize;
      p11 = prom<V +>{
        family4 = ld family;
        family5 = force? family4;
        checkMissing(family5);
        return family5;
      };
      r51 = dyn binomInitialize(p11);
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
      r49 = `$`(stats19, <sym mu.eta>);
      goto L11(r49);
    L14():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L11(dx9);
    L15(dx12):
      simfun = ld simfun;
      simfun1 = force? simfun;
      checkMissing(simfun1);
      list = ldf list in base;
      r53 = dyn list(family3, linktemp11, dx6, dx8, variance1, dev_resids1, aic1, dx10, r51, validmu1, dx12, simfun1, 1.0);
      goto L0(r53);
    L16():
      dr10 = tryDispatchBuiltin.1("$", stats21);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L18() else L17(dr10);
    L17(stats23):
      r52 = `$`(stats23, <sym valideta>);
      goto L15(r52);
    L18():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L15(dx11);
    };
    r55 = dyn structure[, class](p12, "family");
    check L65() else D20();
  D7():
    deopt 37 [r16];
  D8():
    deopt 40 [link1];
  D20():
    deopt 100 [r55];
  L9():
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L31():
    st stats = r16;
    goto L7();
  L35():
    link2 = force? link1;
    checkMissing(link2);
    c4 = `is.character`(link2);
    goto L8(c4);
  L36():
    make_link1 = ldf `make.link`;
    check L37() else D9();
  L65():
    popenv;
    return r55;
  D9():
    deopt 44 [];
  L10(r23):
    c6 = `as.logical`(r23);
    if c6 then L45() else L11();
  L37():
    p4 = prom<V +>{
      link3 = ld link;
      link4 = force? link3;
      checkMissing(link4);
      return link4;
    };
    r21 = dyn make_link1(p4);
    check L38() else D10();
  L41():
    link7 = ld link;
    check L43() else D12();
  L42():
    r22 = dyn base4(<sym link>, "link-glm");
    goto L10(r22);
  D10():
    deopt 46 [r21];
  D12():
    deopt 53 [link7];
  L11():
    stop = ldf stop;
    check L62() else D17();
  L38():
    st stats = r21;
    link5 = ld link;
    check L39() else D11();
  L43():
    link8 = force? link7;
    checkMissing(link8);
    inherits = ldf inherits in base;
    r24 = dyn inherits(link8, "link-glm", FALSE);
    check L44() else D13();
  L45():
    link9 = ld link;
    check L46() else D14();
  D11():
    deopt 48 [link5];
  D13():
    deopt 58 [r24];
  D14():
    deopt 59 [link9];
  D17():
    deopt 75 [];
  L39():
    link6 = force? link5;
    checkMissing(link6);
    st linktemp = link6;
    goto L7();
  L44():
    goto L10(r24);
  L46():
    link10 = force? link9;
    checkMissing(link10);
    st stats = link10;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  L62():
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
    check L63() else D18();
  D18():
    deopt 79 [r39];
  L12(r26):
    r28 = `!`(r26);
    c9 = `as.logical`(r28);
    if c9 then L54() else L13();
  L47():
    stats = ld stats;
    check L49() else D15();
  L48():
    r25 = dyn base5(<lang `$`(stats, name)>);
    goto L12(r25);
  L63():
    goto L7();
  D15():
    deopt 63 [stats];
  L13():
    goto L14(NULL);
  L14(dx4):
    goto L7();
  L49():
    stats1 = force? stats;
    checkMissing(stats1);
    c7 = `is.object`(stats1);
    if c7 then L51() else L52(stats1);
  L54():
    stats4 = ld stats;
    check L55() else D16();
  D16():
    deopt 68 [stats4];
  L50(dx1):
    c8 = `==`(dx1, NULL);
    goto L12(c8);
  L51():
    dr = tryDispatchBuiltin.1("$", stats1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L53() else L52(dr);
  L52(stats3):
    r27 = `$`(stats3, <sym name>);
    goto L50(r27);
  L55():
    stats5 = force? stats4;
    checkMissing(stats5);
    c10 = `is.object`(stats5);
    if c10 then L57() else L58(stats5);
  L53():
    dx = getTryDispatchBuiltinValue(dr);
    goto L50(dx);
  L56(dx3):
    st linktemp = dx3;
    goto L14(dx3);
  L57():
    dr2 = tryDispatchBuiltin.1("$", stats5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58(dr2);
  L58(stats7):
    r29 = `$`(stats7, <sym name>);
    goto L56(r29);
  L59():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L56(dx2);
  }
}
fun inner987613256(mu) {
  (reg mu:*) -+> V { var mu:*, reg mu1:*, reg mu2:V, reg mu3:*, reg mu4:V, reg r:V, reg r1:V |
    mkenv;
    st mu = mu;
    mu1 = ld mu;
    check L0() else D0();
  D0():
    deopt 0 [mu1];
  L0():
    mu2 = force? mu1;
    checkMissing(mu2);
    mu3 = ld mu;
    check L1() else D1();
  D1():
    deopt 2 [mu2, 1.0, mu3];
  L1():
    mu4 = force? mu3;
    checkMissing(mu4);
    r = `-`(1.0, mu4);
    r1 = `*`(mu2, r);
    popenv;
    return r1;
  }
}
fun inner610199266(y, mu, wt) {
  (reg y:*, reg mu:*, reg wt:*) -+> V { var y:*, var mu:*, var wt:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_binomial_dev_resids:*, reg C_binomial_dev_resids1:V, reg y1:*, reg y2:V, reg mu1:*, reg mu2:V, reg wt1:*, reg wt2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st y = y;
    st mu = mu;
    st wt = wt;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_binomial_dev_resids = ld C_binomial_dev_resids;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_binomial_dev_resids>, <sym y>, <sym mu>, <sym wt>);
    goto L0(r);
  D0():
    deopt 1 [C_binomial_dev_resids];
  L3():
    C_binomial_dev_resids1 = force? C_binomial_dev_resids;
    checkMissing(C_binomial_dev_resids1);
    y1 = ld y;
    check L4() else D1();
  D1():
    deopt 2 [C_binomial_dev_resids1, y1];
  L4():
    y2 = force? y1;
    checkMissing(y2);
    mu1 = ld mu;
    check L5() else D2();
  D2():
    deopt 3 [C_binomial_dev_resids1, y2, mu1];
  L5():
    mu2 = force? mu1;
    checkMissing(mu2);
    wt1 = ld wt;
    check L6() else D3();
  D3():
    deopt 4 [C_binomial_dev_resids1, y2, mu2, wt1];
  L6():
    wt2 = force? wt1;
    checkMissing(wt2);
    vargs = dots[y2, mu2, wt2];
    r2 = `.Call`(C_binomial_dev_resids1, vargs, <missing>);
    goto L0(r2);
  }
}
fun inner2639244623(y, n, mu, wt, dev) {
  (reg y:*, reg n:*, reg mu:*, reg wt:*, reg dev:*) -+> V { var y:*, var n:*, var mu:*, var wt:*, var dev:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n1:*, reg n2:V, reg r2:V, reg any:cls, reg r3:V, reg c:L, reg n3:*, reg n4:V, reg n5:V, reg wt1:*, reg wt2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:R, reg r8:V, reg ifelse:cls, reg m:*, reg m1:V, reg r9:V, reg p:p(V +), reg wt3:*, reg wt4:V, reg m2:*, reg m3:V, reg r11:V, reg p1:p(V +), reg r13:V, reg dbinom:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg round:cls, reg r16:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg round1:cls, reg r20:V, reg p3:p(V +), reg mu1:*, reg mu2:V, reg p4:p(V +), reg r23:V, reg r24:V, reg sum:cls, reg r25:V, reg r26:V |
    mkenv;
    st y = y;
    st n = n;
    st mu = mu;
    st wt = wt;
    st dev = dev;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L8() else L1();
  L4():
    n1 = ld n;
    check L6() else D0();
  L5():
    r = dyn base(<lang `>`(n, 1.0)>);
    goto L0(r);
  D0():
    deopt 2 [n1];
  L1():
    wt1 = ld wt;
    check L11() else D3();
  L2(n5):
    st m = n5;
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L6():
    n2 = force? n1;
    checkMissing(n2);
    r2 = `>`(n2, 1.0);
    any = ldf any in base;
    r3 = dyn any(r2);
    check L7() else D1();
  L8():
    n3 = ld n;
    check L9() else D2();
  D1():
    deopt 7 [r3];
  D2():
    deopt 8 [n3];
  D3():
    deopt 10 [wt1];
  L3(r7, r8):
    r26 = `*`(r7, r8);
    popenv;
    return r26;
  L7():
    goto L0(r3);
  L9():
    n4 = force? n3;
    checkMissing(n4);
    goto L2(n4);
  L11():
    wt2 = force? wt1;
    checkMissing(wt2);
    goto L2(wt2);
  L12():
    ifelse = ldf ifelse;
    check L14() else D4();
  L13():
    r6 = dyn base1(<lang `*`(ifelse(`>`(m, 0.0), `(`(`/`(wt, m)), 0.0), dbinom(round(`*`(m, y)), round(m), mu, log=TRUE))>);
    goto L3(-2.0, r6);
  D4():
    deopt 17 [-2.0];
  L14():
    p = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      r9 = `>`(m1, 0.0);
      return r9;
    };
    p1 = prom<V +>{
      wt3 = ld wt;
      wt4 = force? wt3;
      checkMissing(wt4);
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      r11 = `/`(wt4, m3);
      visible.0();
      return r11;
    };
    r13 = dyn ifelse(p, p1, 0.0);
    check L15() else D5();
  D5():
    deopt 21 [-2.0, r13];
  L15():
    dbinom = ldf dbinom;
    check L16() else D6();
  D6():
    deopt 22 [-2.0, r13];
  L16():
    p2 = prom<V +>{
      sym2 = ldf round;
      base2 = ldf round in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      round = ldf round in base;
      r16 = dyn round(<lang `*`(m, y)>);
      goto L0(r16);
    L2():
      r14 = dyn base2(<lang `*`(m, y)>);
      goto L0(r14);
    };
    p3 = prom<V +>{
      sym3 = ldf round;
      base3 = ldf round in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      round1 = ldf round in base;
      r20 = dyn round1(<sym m>);
      goto L0(r20);
    L2():
      r18 = dyn base3(<sym m>);
      goto L0(r18);
    };
    p4 = prom<V +>{
      mu1 = ld mu;
      mu2 = force? mu1;
      checkMissing(mu2);
      return mu2;
    };
    r23 = dyn dbinom[, , , log](p2, p3, p4, TRUE);
    check L17() else D7();
  D7():
    deopt 28 [-2.0, r13, r23];
  L17():
    r24 = `*`(r13, r23);
    sum = ldf sum in base;
    r25 = dyn sum(r24);
    check L18() else D8();
  D8():
    deopt 31 [-2.0, r25];
  L18():
    goto L3(-2.0, r25);
  }
}
fun inner261532220(object, nsim) {
  (reg object:*, reg nsim:*) -+> V { var object:*, var nsim:*, reg fitted:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg ftd:*, reg ftd1:V, reg length:cls, reg r4:V, reg n:*, reg n1:V, reg nsim1:*, reg nsim2:V, reg r5:V, reg object3:*, reg object4:V, reg c:L, reg object6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg wts:*, reg wts1:V, reg __:cls, reg r9:V, reg r10:V, reg any:cls, reg r11:V, reg c1:L, reg stop:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg object7:*, reg object8:V, reg c2:L, reg object10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r16:V, reg c3:V, reg r17:V, reg c4:L, reg model_response:cls, reg m:*, reg m1:V, reg p1:p(V +), reg r19:V, reg is_factor:cls, reg y:*, reg y1:V, reg p2:p(V +), reg r21:V, reg c5:L, reg factor:cls, reg rbinom:cls, reg ntot:*, reg ntot1:V, reg p3:p(V +), reg ftd2:*, reg ftd3:V, reg p4:p(V +), reg r24:V, reg r25:V, reg p5:p(V +), reg levels:cls, reg y2:*, reg y3:V, reg p6:p(V +), reg r28:V, reg p7:p(V +), reg r30:V, reg split:cls, reg yy:*, reg yy1:V, reg p8:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg rep:cls, reg r34:V, reg p9:p(V +), reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg y4:*, reg y5:V, reg is_matrix:cls, reg r39:V, reg c6:L, reg c8:V, reg ncol:cls, reg y6:*, reg y7:V, reg p10:p(V +), reg r41:V, reg r42:V, reg c9:L, reg c10:V, reg c12:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg nsim3:*, reg nsim4:V, reg vector:cls, reg r45:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg nsim5:*, reg nsim6:V, reg r48:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c13:L, reg x:V, reg rbinom1:cls, reg n2:*, reg n3:V, reg p11:p(V +), reg wts2:*, reg wts3:V, reg p12:p(V +), reg ftd4:*, reg ftd5:V, reg p13:p(V +), reg r52:V, reg cbind:cls, reg Y:*, reg Y1:V, reg p14:p(V +), reg wts4:*, reg wts5:V, reg Y2:*, reg Y3:V, reg r54:V, reg p15:p(V +), reg r56:V, reg colnames:cls, reg y8:*, reg y9:V, reg p16:p(V +), reg r58:V, reg l1:*, reg colnames__:cls, reg r59:V, reg YY:*, reg YY1:V, reg l2:*, reg c14:L, reg i6:I, reg YY3:V, reg l4:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i8:I, reg dx5:V, reg i9:*, reg i10:V, reg ____:cls, reg r60:V, reg yy2:*, reg yy3:V, reg rbinom2:cls, reg ntot2:*, reg ntot3:V, reg p17:p(V +), reg wts6:*, reg wts7:V, reg p18:p(V +), reg ftd6:*, reg ftd7:V, reg p19:p(V +), reg r64:V, reg wts8:*, reg wts9:V, reg r65:V, reg rbinom3:cls, reg ntot4:*, reg ntot5:V, reg p20:p(V +), reg wts10:*, reg wts11:V, reg p21:p(V +), reg ftd8:*, reg ftd9:V, reg p22:p(V +), reg r69:V, reg wts12:*, reg wts13:V, reg r70:V |
    mkenv;
    st object = object;
    st nsim = nsim;
    fitted = ldf fitted;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn fitted(p);
    check L16() else D1();
  D1():
    deopt 3 [r1];
  L16():
    st ftd = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r3):
    st n = r3;
    n = ld n;
    check L21() else D4();
  L17():
    ftd = ld ftd;
    check L19() else D2();
  L18():
    r2 = dyn base(<sym ftd>);
    goto L0(r2);
  D2():
    deopt 7 [ftd];
  D4():
    deopt 12 [n];
  L19():
    ftd1 = force? ftd;
    checkMissing(ftd1);
    length = ldf length in base;
    r4 = dyn length(ftd1);
    check L20() else D3();
  L21():
    n1 = force? n;
    checkMissing(n1);
    nsim1 = ld nsim;
    check L22() else D5();
  D3():
    deopt 10 [r4];
  D5():
    deopt 13 [n1, nsim1];
  L20():
    goto L0(r4);
  L22():
    nsim2 = force? nsim1;
    checkMissing(nsim2);
    r5 = `*`(n1, nsim2);
    st ntot = r5;
    object3 = ld object;
    check L23() else D6();
  D6():
    deopt 17 [object3];
  L23():
    object4 = force? object3;
    checkMissing(object4);
    c = `is.object`(object4);
    if c then L25() else L26(object4);
  L24(dx1):
    st wts = dx1;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L25():
    dr = tryDispatchBuiltin.1("$", object4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(object6):
    r6 = `$`(object6, <sym prior.weights>);
    goto L24(r6);
  L1(r8):
    c1 = `as.logical`(r8);
    if c1 then L33() else L2();
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L24(dx);
  L28():
    wts = ld wts;
    check L30() else D7();
  L29():
    r7 = dyn base1(<lang `!=`(`%%`(wts, 1.0), 0.0)>);
    goto L1(r7);
  D7():
    deopt 24 [wts];
  L2():
    goto L3();
  L3():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L30():
    wts1 = force? wts;
    checkMissing(wts1);
    __ = ldf `%%` in base;
    r9 = dyn __(wts1, 1.0);
    check L31() else D8();
  L33():
    stop = ldf stop;
    check L34() else D10();
  D8():
    deopt 28 [r9];
  D10():
    deopt 34 [];
  L4(r15):
    r17 = `!`(r15);
    c4 = `as.logical`(r17);
    if c4 then L44() else L5();
  L31():
    r10 = `!=`(r9, 0.0);
    any = ldf any in base;
    r11 = dyn any(r10);
    check L32() else D9();
  L34():
    r12 = dyn stop("cannot simulate from non-integer prior.weights");
    check L35() else D11();
  L37():
    object7 = ld object;
    check L39() else D12();
  L38():
    r14 = dyn base2(<lang `<-`(m, `$`(object, model))>);
    goto L4(r14);
  D9():
    deopt 32 [r11];
  D11():
    deopt 36 [r12];
  D12():
    deopt 40 [object7];
  L5():
    rbinom3 = ldf rbinom;
    check L91() else D42();
  L32():
    goto L1(r11);
  L35():
    goto L3();
  L39():
    object8 = force? object7;
    checkMissing(object8);
    c2 = `is.object`(object8);
    if c2 then L41() else L42(object8);
  L44():
    model_response = ldf `model.response`;
    check L45() else D13();
  D13():
    deopt 47 [];
  D42():
    deopt 139 [];
  L40(dx3):
    st m = dx3;
    c3 = `==`(dx3, NULL);
    goto L4(c3);
  L41():
    dr2 = tryDispatchBuiltin.1("$", object8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L43() else L42(dr2);
  L42(object10):
    r16 = `$`(object10, <sym model>);
    goto L40(r16);
  L45():
    p1 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r19 = dyn model_response(p1);
    check L46() else D14();
  L91():
    p20 = prom<V +>{
      ntot4 = ld ntot;
      ntot5 = force? ntot4;
      checkMissing(ntot5);
      return ntot5;
    };
    p21 = prom<V +>{
      wts10 = ld wts;
      wts11 = force? wts10;
      checkMissing(wts11);
      return wts11;
    };
    p22 = prom<V +>{
      ftd8 = ld ftd;
      ftd9 = force? ftd8;
      checkMissing(ftd9);
      return ftd9;
    };
    r69 = dyn rbinom3[, size, prob](p20, p21, p22);
    check L92() else D43();
  D14():
    deopt 49 [r19];
  D43():
    deopt 145 [r69];
  L43():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L40(dx2);
  L46():
    st y = r19;
    is_factor = ldf `is.factor`;
    check L47() else D15();
  L92():
    wts12 = ld wts;
    check L93() else D44();
  D15():
    deopt 52 [];
  D44():
    deopt 145 [r69, wts12];
  L47():
    p2 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r21 = dyn is_factor(p2);
    check L48() else D16();
  L93():
    wts13 = force? wts12;
    checkMissing(wts13);
    r70 = `/`(r69, wts13);
    popenv;
    return r70;
  D16():
    deopt 54 [r21];
  L48():
    c5 = `as.logical`(r21);
    if c5 then L49() else L6();
  L6():
    sym4 = ldf `is.matrix`;
    base4 = ldf `is.matrix` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L49():
    factor = ldf factor;
    check L50() else D17();
  D17():
    deopt 56 [];
  L7(r38):
    c6 = `as.logical`(r38);
    if c6 then L59() else L8(c6);
  L50():
    p5 = prom<V +>{
      rbinom = ldf rbinom;
      p3 = prom<V +>{
        ntot = ld ntot;
        ntot1 = force? ntot;
        checkMissing(ntot1);
        return ntot1;
      };
      p4 = prom<V +>{
        ftd2 = ld ftd;
        ftd3 = force? ftd2;
        checkMissing(ftd3);
        return ftd3;
      };
      r24 = dyn rbinom[, size, prob](p3, 1.0, p4);
      r25 = `+`(1.0, r24);
      return r25;
    };
    p7 = prom<V +>{
      levels = ldf levels;
      p6 = prom<V +>{
        y2 = ld y;
        y3 = force? y2;
        checkMissing(y3);
        return y3;
      };
      r28 = dyn levels(p6);
      return r28;
    };
    r30 = dyn factor[, labels](p5, p7);
    check L51() else D18();
  L55():
    y4 = ld y;
    check L57() else D21();
  L56():
    r37 = dyn base4(<sym y>);
    goto L7(r37);
  D18():
    deopt 60 [r30];
  D21():
    deopt 69 [y4];
  L8(c8):
    c12 = `as.logical`(c8);
    if c12 then L63() else L9();
  L51():
    st yy = r30;
    split = ldf split;
    check L52() else D19();
  L57():
    y5 = force? y4;
    checkMissing(y5);
    is_matrix = ldf `is.matrix` in base;
    r39 = dyn is_matrix(y5);
    check L58() else D22();
  L59():
    ncol = ldf ncol;
    check L60() else D23();
  D19():
    deopt 63 [];
  D22():
    deopt 72 [r39];
  D23():
    deopt 74 [c6];
  L9():
    rbinom2 = ldf rbinom;
    check L87() else D39();
  L52():
    p8 = prom<V +>{
      yy = ld yy;
      yy1 = force? yy;
      checkMissing(yy1);
      return yy1;
    };
    p9 = prom<V +>{
      sym3 = ldf rep;
      base3 = ldf rep in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      rep = ldf rep in base;
      r34 = dyn rep(<lang seq_len(nsim)>, <sym n>);
      goto L0(r34);
    L2():
      r32 = dyn base3[, each](<lang seq_len(nsim)>, <sym n>);
      goto L0(r32);
    };
    r36 = dyn split(p8, p9);
    check L53() else D20();
  L58():
    goto L7(r39);
  L60():
    p10 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    r41 = dyn ncol(p10);
    check L61() else D24();
  L63():
    sym5 = ldf vector;
    base5 = ldf vector in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  D20():
    deopt 66 [r36];
  D24():
    deopt 76 [c6, r41];
  D39():
    deopt 129 [];
  L10(r44):
    st yy = r44;
    sym6 = ldf seq_len;
    base6 = ldf seq_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  L53():
    popenv;
    return r36;
  L61():
    r42 = `==`(r41, 2.0);
    c9 = `as.logical`(r42);
    c10 = `&&`(c6, c9);
    goto L8(c10);
  L64():
    nsim3 = ld nsim;
    check L66() else D25();
  L65():
    r43 = dyn base5("list", <sym nsim>);
    goto L10(r43);
  L87():
    p17 = prom<V +>{
      ntot2 = ld ntot;
      ntot3 = force? ntot2;
      checkMissing(ntot3);
      return ntot3;
    };
    p18 = prom<V +>{
      wts6 = ld wts;
      wts7 = force? wts6;
      checkMissing(wts7);
      return wts7;
    };
    p19 = prom<V +>{
      ftd6 = ld ftd;
      ftd7 = force? ftd6;
      checkMissing(ftd7);
      return ftd7;
    };
    r64 = dyn rbinom2[, size, prob](p17, p18, p19);
    check L88() else D40();
  D25():
    deopt 83 [nsim3];
  D40():
    deopt 135 [r64];
  L11(r47):
    s = toForSeq(r47);
    l = length(s);
    i = 0;
    goto L12(i);
  L66():
    nsim4 = force? nsim3;
    checkMissing(nsim4);
    vector = ldf vector in base;
    r45 = dyn vector("list", nsim4);
    check L67() else D26();
  L68():
    nsim5 = ld nsim;
    check L70() else D27();
  L69():
    r46 = dyn base6(<sym nsim>);
    goto L11(r46);
  L88():
    wts8 = ld wts;
    check L89() else D41();
  D26():
    deopt 86 [r45];
  D27():
    deopt 89 [nsim5];
  D41():
    deopt 135 [r64, wts8];
  L12(i1):
    i2 = `+`.1(i1, 1);
    c13 = `<`.1(l, i2);
    if c13 then L71() else L14();
  L67():
    goto L10(r45);
  L70():
    nsim6 = force? nsim5;
    checkMissing(nsim6);
    r48 = seq_len(nsim6);
    goto L11(r48);
  L89():
    wts9 = force? wts8;
    checkMissing(wts9);
    r65 = `/`(r64, wts9);
    popenv;
    return r65;
  L14():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    rbinom1 = ldf rbinom;
    check L72() else D28();
  L71():
    yy2 = ld yy;
    check L85() else D38();
  D28():
    deopt 93 [i2];
  D38():
    deopt 126 [yy2];
  L72():
    p11 = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      return n3;
    };
    p12 = prom<V +>{
      wts2 = ld wts;
      wts3 = force? wts2;
      checkMissing(wts3);
      return wts3;
    };
    p13 = prom<V +>{
      ftd4 = ld ftd;
      ftd5 = force? ftd4;
      checkMissing(ftd5);
      return ftd5;
    };
    r52 = dyn rbinom1[, size, prob](p11, p12, p13);
    check L73() else D29();
  L85():
    yy3 = force? yy2;
    checkMissing(yy3);
    popenv;
    return yy3;
  D29():
    deopt 99 [i2, r52];
  L73():
    st Y = r52;
    cbind = ldf cbind;
    check L74() else D30();
  D30():
    deopt 102 [i2];
  L74():
    p14 = prom<V +>{
      Y = ld Y;
      Y1 = force? Y;
      checkMissing(Y1);
      return Y1;
    };
    p15 = prom<V +>{
      wts4 = ld wts;
      wts5 = force? wts4;
      checkMissing(wts5);
      Y2 = ld Y;
      Y3 = force? Y2;
      checkMissing(Y3);
      r54 = `-`(wts5, Y3);
      return r54;
    };
    r56 = dyn cbind(p14, p15);
    check L75() else D31();
  D31():
    deopt 105 [i2, r56];
  L75():
    st YY = r56;
    colnames = ldf colnames;
    check L76() else D32();
  D32():
    deopt 108 [i2];
  L76():
    p16 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      return y9;
    };
    r58 = dyn colnames(p16);
    check L77() else D33();
  D33():
    deopt 110 [i2, r58];
  L77():
    l1 = ld YY;
    colnames__ = ldf `colnames<-`;
    check L78() else D34();
  D34():
    deopt 112 [i2, r58, l1, r58];
  L78():
    r59 = dyn colnames__(l1, NULL, r58);
    check L79() else D35();
  D35():
    deopt 114 [i2, r58, r59];
  L79():
    st YY = r59;
    YY = ld YY;
    check L80() else D36();
  D36():
    deopt 116 [i2, YY];
  L80():
    YY1 = force? YY;
    checkMissing(YY1);
    l2 = ld yy;
    c14 = `is.object`(l2);
    if c14 then L81() else L82(i2, YY1, l2);
  L13(i8, dx5):
    st yy = dx5;
    goto L12(i8);
  L81():
    dr4 = tryDispatchBuiltin.0("[[<-", l2, YY1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L83() else L82(i2, YY1, dr4);
  L82(i6, YY3, l4):
    i9 = ld i;
    check L84() else D37();
  D37():
    deopt 119 [i6, YY3, l4, YY1, i9];
  L83():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L13(i2, dx4);
  L84():
    i10 = force? i9;
    ____ = ldf `[[<-` in base;
    r60 = dyn ____(l4, YY1, i10);
    goto L13(i6, r60);
  }
}