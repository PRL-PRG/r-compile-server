fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2855028560;
    st getOneFunAPI = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2855028560(apitype) {
  (reg apitype:*) -+> V { var apitype:*, reg WRE:cls, reg r:V, reg sprintf:cls, reg apitype1:*, reg apitype2:V, reg p:p(V +), reg r2:V, reg sprintf1:cls, reg apitype3:*, reg apitype4:V, reg p1:p(V +), reg r4:V, reg sub:cls, reg fpat:*, reg fpat1:V, reg p2:p(V +), reg grep:cls, reg fpat2:*, reg fpat3:V, reg p3:p(V +), reg wrelines:*, reg wrelines1:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), reg r10:V, reg sub1:cls, reg hpat:*, reg hpat1:V, reg p6:p(V +), reg grep1:cls, reg hpat2:*, reg hpat3:V, reg p7:p(V +), reg wrelines2:*, reg wrelines3:V, reg p8:p(V +), reg r14:V, reg p9:p(V +), reg r16:V, reg data_frame:cls, reg funs:*, reg funs1:V, reg p10:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r18:V, reg r19:V, reg rep:cls, reg r20:V, reg p11:p(V +), reg r22:V, reg r23:cls, reg lapply:cls, reg hdrs:*, reg hdrs1:V, reg p12:p(V +), reg getHdrAPI:*, reg getHdrAPI1:V, reg p13:p(V +), reg r26:V, reg rbind:cls, reg wAPI:*, reg wAPI1:V, reg p14:p(V +), reg do_call:cls, reg rbind1:*, reg rbind2:V, reg p15:p(V +), reg hAPI:*, reg hAPI1:V, reg p16:p(V +), reg r30:V, reg p17:p(V +), reg r32:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r33:V, reg r34:V, reg rep1:cls, reg r35:V, reg l:*, reg c:L, reg r37:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r40:V, reg unmap:cls, reg val:*, reg val1:V, reg c1:L, reg val3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r41:V, reg p18:p(V +), reg r43:V, reg l3:*, reg c2:L, reg r45:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r48:V, reg l6:*, reg rownames__:cls, reg r49:V, reg val4:*, reg val5:V |
    mkenv;
    st apitype = apitype;
    WRE = ldf WRE;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn WRE();
    check L2() else D1();
  D1():
    deopt 2 [r];
  L2():
    st wrelines = r;
    sprintf = ldf sprintf;
    check L3() else D2();
  D2():
    deopt 5 [];
  L3():
    p = prom<V +>{
      apitype1 = ld apitype;
      apitype2 = force? apitype1;
      checkMissing(apitype2);
      return apitype2;
    };
    r2 = dyn sprintf("^@(%s)fun +", p);
    check L4() else D3();
  D3():
    deopt 8 [r2];
  L4():
    st fpat = r2;
    sprintf1 = ldf sprintf;
    check L5() else D4();
  D4():
    deopt 11 [];
  L5():
    p1 = prom<V +>{
      apitype3 = ld apitype;
      apitype4 = force? apitype3;
      checkMissing(apitype4);
      return apitype4;
    };
    r4 = dyn sprintf1("^@(%s)hdr +", p1);
    check L6() else D5();
  D5():
    deopt 14 [r4];
  L6():
    st hpat = r4;
    sub = ldf sub;
    check L7() else D6();
  D6():
    deopt 17 [];
  L7():
    p2 = prom<V +>{
      fpat = ld fpat;
      fpat1 = force? fpat;
      checkMissing(fpat1);
      return fpat1;
    };
    p5 = prom<V +>{
      grep = ldf grep;
      p3 = prom<V +>{
        fpat2 = ld fpat;
        fpat3 = force? fpat2;
        checkMissing(fpat3);
        return fpat3;
      };
      p4 = prom<V +>{
        wrelines = ld wrelines;
        wrelines1 = force? wrelines;
        checkMissing(wrelines1);
        return wrelines1;
      };
      r8 = dyn grep[, , value](p3, p4, TRUE);
      return r8;
    };
    r10 = dyn sub(p2, "", p5);
    check L8() else D7();
  D7():
    deopt 21 [r10];
  L8():
    st funs = r10;
    sub1 = ldf sub;
    check L9() else D8();
  D8():
    deopt 24 [];
  L9():
    p6 = prom<V +>{
      hpat = ld hpat;
      hpat1 = force? hpat;
      checkMissing(hpat1);
      return hpat1;
    };
    p9 = prom<V +>{
      grep1 = ldf grep;
      p7 = prom<V +>{
        hpat2 = ld hpat;
        hpat3 = force? hpat2;
        checkMissing(hpat3);
        return hpat3;
      };
      p8 = prom<V +>{
        wrelines2 = ld wrelines;
        wrelines3 = force? wrelines2;
        checkMissing(wrelines3);
        return wrelines3;
      };
      r14 = dyn grep1[, , value](p7, p8, TRUE);
      return r14;
    };
    r16 = dyn sub1(p6, "", p9);
    check L10() else D9();
  D9():
    deopt 28 [r16];
  L10():
    st hdrs = r16;
    data_frame = ldf `data.frame`;
    check L11() else D10();
  D10():
    deopt 31 [];
  L11():
    p10 = prom<V +>{
      funs = ld funs;
      funs1 = force? funs;
      checkMissing(funs1);
      return funs1;
    };
    p11 = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r19):
      return r19;
    L1():
      rep = ldf rep in base;
      r20 = dyn rep("WRE", <lang length(names)>);
      goto L0(r20);
    L2():
      r18 = dyn base("WRE", <lang length(names)>);
      goto L0(r18);
    };
    r22 = dyn data_frame[name, loc](p10, p11);
    check L12() else D11();
  D11():
    deopt 36 [r22];
  L12():
    st wAPI = r22;
    r23 = clos inner2493741426;
    st getHdrAPI = r23;
    lapply = ldf lapply;
    check L13() else D12();
  D12():
    deopt 42 [];
  L13():
    p12 = prom<V +>{
      hdrs = ld hdrs;
      hdrs1 = force? hdrs;
      checkMissing(hdrs1);
      return hdrs1;
    };
    p13 = prom<V +>{
      getHdrAPI = ld getHdrAPI;
      getHdrAPI1 = force? getHdrAPI;
      checkMissing(getHdrAPI1);
      return getHdrAPI1;
    };
    r26 = dyn lapply(p12, p13);
    check L14() else D13();
  D13():
    deopt 45 [r26];
  L14():
    st hAPI = r26;
    rbind = ldf rbind;
    check L15() else D14();
  D14():
    deopt 48 [];
  L15():
    p14 = prom<V +>{
      wAPI = ld wAPI;
      wAPI1 = force? wAPI;
      checkMissing(wAPI1);
      return wAPI1;
    };
    p17 = prom<V +>{
      do_call = ldf `do.call`;
      p15 = prom<V +>{
        rbind1 = ld rbind;
        rbind2 = force? rbind1;
        checkMissing(rbind2);
        return rbind2;
      };
      p16 = prom<V +>{
        hAPI = ld hAPI;
        hAPI1 = force? hAPI;
        checkMissing(hAPI1);
        return hAPI1;
      };
      r30 = dyn do_call(p15, p16);
      return r30;
    };
    r32 = dyn rbind(p14, p17);
    check L16() else D15();
  D15():
    deopt 51 [r32];
  L16():
    st val = r32;
    sym1 = ldf rep;
    base1 = ldf rep in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L0(r34):
    l = ld val;
    c = `is.object`(l);
    if c then L20() else L21(r34, l);
  L17():
    rep1 = ldf rep in base;
    r35 = dyn rep1(<sym apitype>, <lang nrow(val)>);
    goto L0(r35);
  L18():
    r33 = dyn base1(<sym apitype>, <lang nrow(val)>);
    goto L0(r33);
  L19(dx1):
    st val = dx1;
    unmap = ldf unmap;
    check L23() else D16();
  L20():
    dr = tryDispatchBuiltin.0("$<-", l, r34);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(r34, dr);
  L21(r37, l2):
    r40 = `$<-`(l2, <sym apitype>, r34);
    goto L19(r40);
  D16():
    deopt 60 [];
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L23():
    p18 = prom<V +>{
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      c1 = `is.object`(val1);
      if c1 then L1() else L2(val1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", val1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(val3):
      r41 = `$`(val3, <sym name>);
      goto L0(r41);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r43 = dyn unmap(p18);
    check L24() else D17();
  D17():
    deopt 62 [r43];
  L24():
    l3 = ld val;
    c2 = `is.object`(l3);
    if c2 then L26() else L27(r43, l3);
  L25(dx5):
    st val = dx5;
    l6 = ld val;
    rownames__ = ldf `rownames<-`;
    check L29() else D18();
  L26():
    dr4 = tryDispatchBuiltin.0("$<-", l3, r43);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L28() else L27(r43, dr4);
  L27(r45, l5):
    r48 = `$<-`(l5, <sym unmapped>, r43);
    goto L25(r48);
  D18():
    deopt 69 [NULL, l6, NULL];
  L28():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L25(dx4);
  L29():
    r49 = dyn rownames__(l6, NULL, NULL);
    check L30() else D19();
  D19():
    deopt 71 [NULL, r49];
  L30():
    st val = r49;
    val4 = ld val;
    check L31() else D20();
  D20():
    deopt 73 [val4];
  L31():
    val5 = force? val4;
    checkMissing(val5);
    popenv;
    return val5;
  }
}
fun inner2493741426(hdr) {
  (reg hdr:*) -+> V { var hdr:*, reg getFunsHdr:cls, reg file_path:cls, reg R_home:cls, reg r:V, reg p:p(V +), reg hdr1:*, reg hdr2:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg data_frame:cls, reg hfuns:*, reg hfuns1:V, reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg rep:cls, reg r9:V, reg p4:p(V +), reg r11:V |
    mkenv;
    st hdr = hdr;
    getFunsHdr = ldf getFunsHdr;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        R_home = ldf `R.home`;
        r = dyn R_home("include");
        return r;
      };
      p1 = prom<V +>{
        hdr1 = ld hdr;
        hdr2 = force? hdr1;
        checkMissing(hdr2);
        return hdr2;
      };
      r3 = dyn file_path(p, p1);
      return r3;
    };
    r5 = dyn getFunsHdr(p2);
    check L1() else D1();
  D1():
    deopt 3 [r5];
  L1():
    st hfuns = r5;
    data_frame = ldf `data.frame`;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p3 = prom<V +>{
      hfuns = ld hfuns;
      hfuns1 = force? hfuns;
      checkMissing(hfuns1);
      return hfuns1;
    };
    p4 = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      rep = ldf rep in base;
      r9 = dyn rep(<sym hdr>, <lang length(hfuns)>);
      goto L0(r9);
    L2():
      r7 = dyn base(<sym hdr>, <lang length(hfuns)>);
      goto L0(r7);
    };
    r11 = dyn data_frame[name, loc](p3, p4);
    check L3() else D3();
  D3():
    deopt 11 [r11];
  L3():
    popenv;
    return r11;
  }
}