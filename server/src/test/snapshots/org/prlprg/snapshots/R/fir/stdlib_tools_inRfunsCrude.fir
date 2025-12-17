fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4107366828;
    st inRfunsCrude = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4107366828(syms) {
  (reg syms:*) -+> V { var syms:*, reg union:cls, reg syms1:*, reg syms2:V, reg c:L, reg syms4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg syms5:*, reg syms6:V, reg toupper:cls, reg syms7:*, reg syms8:V, reg p:p(V +), reg r1:V, reg r2:V, reg __:cls, reg r3:V, reg p1:p(V +), reg grep:cls, reg syms9:*, reg syms10:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg sprintf:cls, reg pat:*, reg pat1:V, reg p4:p(V +), reg r10:V, reg sprintf1:cls, reg pat2:*, reg pat3:V, reg p5:p(V +), reg r12:V, reg sprintf2:cls, reg pat4:*, reg pat5:V, reg p6:p(V +), reg r14:V, reg sprintf3:cls, reg pat6:*, reg pat7:V, reg p7:p(V +), reg r16:V, reg sprintf4:cls, reg pat8:*, reg pat9:V, reg p8:p(V +), reg r18:V, reg sprintf5:cls, reg pat10:*, reg pat11:V, reg p9:p(V +), reg r20:V, reg sprintf6:cls, reg pat12:*, reg pat13:V, reg p10:p(V +), reg r22:V, reg sprintf7:cls, reg pat14:*, reg pat15:V, reg p11:p(V +), reg r24:V, reg sprintf8:cls, reg pat16:*, reg pat17:V, reg p12:p(V +), reg r26:V, reg sprintf9:cls, reg pat18:*, reg pat19:V, reg p13:p(V +), reg r28:V, reg syms11:*, reg syms12:V, reg c1:L, reg syms14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg grepl:cls, reg pat20:*, reg pat21:V, reg p14:p(V +), reg syms15:*, reg syms16:V, reg p15:p(V +), reg r31:V, reg r32:V, reg __1:cls, reg r33:V |
    mkenv;
    st syms = syms;
    union = ldf union;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      syms1 = ld syms;
      syms2 = force? syms1;
      checkMissing(syms2);
      c = `is.object`(syms2);
      if c then L1() else L2(syms2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", syms2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(syms4):
      syms5 = ld syms;
      syms6 = force? syms5;
      checkMissing(syms6);
      toupper = ldf toupper;
      p = prom<V +>{
        syms7 = ld syms;
        syms8 = force? syms7;
        checkMissing(syms8);
        return syms8;
      };
      r1 = dyn toupper(p);
      r2 = `==`(syms6, r1);
      __ = ldf `[` in base;
      r3 = dyn __(syms4, r2);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      grep = ldf grep;
      p2 = prom<V +>{
        syms9 = ld syms;
        syms10 = force? syms9;
        checkMissing(syms10);
        return syms10;
      };
      r6 = dyn grep[, , value]("^_?Rf?_", p2, TRUE);
      return r6;
    };
    r8 = dyn union(p1, p3);
    check L2() else D1();
  D1():
    deopt 4 [r8];
  L2():
    st syms = r8;
    st pat = "R_MB_CUR_MAX|R_BaseNamespace|R_BlankScalarString|R_BlankString";
    sprintf = ldf sprintf;
    check L3() else D2();
  D2():
    deopt 10 [];
  L3():
    p4 = prom<V +>{
      pat = ld pat;
      pat1 = force? pat;
      checkMissing(pat1);
      return pat1;
    };
    r10 = dyn sprintf("%s|R_CStackDir|R_CStackLimit|R_CStackStart", p4);
    check L4() else D3();
  D3():
    deopt 13 [r10];
  L4():
    st pat = r10;
    sprintf1 = ldf sprintf;
    check L5() else D4();
  D4():
    deopt 16 [];
  L5():
    p5 = prom<V +>{
      pat2 = ld pat;
      pat3 = force? pat2;
      checkMissing(pat3);
      return pat3;
    };
    r12 = dyn sprintf1("%s|R_Consolefile|R_CurrentExpression|R_Interactive", p5);
    check L6() else D5();
  D5():
    deopt 19 [r12];
  L6():
    st pat = r12;
    sprintf2 = ldf sprintf;
    check L7() else D6();
  D6():
    deopt 22 [];
  L7():
    p6 = prom<V +>{
      pat4 = ld pat;
      pat5 = force? pat4;
      checkMissing(pat5);
      return pat5;
    };
    r14 = dyn sprintf2("%s|R_Outputfile|R_Srcref|R_TempDir", p6);
    check L8() else D7();
  D7():
    deopt 25 [r14];
  L8():
    st pat = r14;
    sprintf3 = ldf sprintf;
    check L9() else D8();
  D8():
    deopt 28 [];
  L9():
    p7 = prom<V +>{
      pat6 = ld pat;
      pat7 = force? pat6;
      checkMissing(pat7);
      return pat7;
    };
    r16 = dyn sprintf3("%s|R_compact_.*_class|R_ignore_SIGPIPE", p7);
    check L10() else D9();
  D9():
    deopt 31 [r16];
  L10():
    st pat = r16;
    sprintf4 = ldf sprintf;
    check L11() else D10();
  D10():
    deopt 34 [];
  L11():
    p8 = prom<V +>{
      pat8 = ld pat;
      pat9 = force? pat8;
      checkMissing(pat9);
      return pat9;
    };
    r18 = dyn sprintf4("%s|R_interrupts_pending|R_interrupts_suspended", p8);
    check L12() else D11();
  D11():
    deopt 37 [r18];
  L12():
    st pat = r18;
    sprintf5 = ldf sprintf;
    check L13() else D12();
  D12():
    deopt 40 [];
  L13():
    p9 = prom<V +>{
      pat10 = ld pat;
      pat11 = force? pat10;
      checkMissing(pat11);
      return pat11;
    };
    r20 = dyn sprintf5("%s|R_isForkedChild", p9);
    check L14() else D13();
  D13():
    deopt 43 [r20];
  L14():
    st pat = r20;
    sprintf6 = ldf sprintf;
    check L15() else D14();
  D14():
    deopt 46 [];
  L15():
    p10 = prom<V +>{
      pat12 = ld pat;
      pat13 = force? pat12;
      checkMissing(pat13);
      return pat13;
    };
    r22 = dyn sprintf6("%s|R_NilValue|R_MissingArg|R_Visible", p10);
    check L16() else D15();
  D15():
    deopt 49 [r22];
  L16():
    st pat = r22;
    sprintf7 = ldf sprintf;
    check L17() else D16();
  D16():
    deopt 52 [];
  L17():
    p11 = prom<V +>{
      pat14 = ld pat;
      pat15 = force? pat14;
      checkMissing(pat15);
      return pat15;
    };
    r24 = dyn sprintf7("%s|R_.*Symbol$|R_dot_|R_Na", p11);
    check L18() else D17();
  D17():
    deopt 55 [r24];
  L18():
    st pat = r24;
    sprintf8 = ldf sprintf;
    check L19() else D18();
  D18():
    deopt 58 [];
  L19():
    p12 = prom<V +>{
      pat16 = ld pat;
      pat17 = force? pat16;
      checkMissing(pat17);
      return pat17;
    };
    r26 = dyn sprintf8("%s|R_NilValue|R_GlobalEnv|R_BaseEnv|R_EmptyEnv", p12);
    check L20() else D19();
  D19():
    deopt 61 [r26];
  L20():
    st pat = r26;
    sprintf9 = ldf sprintf;
    check L21() else D20();
  D20():
    deopt 64 [];
  L21():
    p13 = prom<V +>{
      pat18 = ld pat;
      pat19 = force? pat18;
      checkMissing(pat19);
      return pat19;
    };
    r28 = dyn sprintf9("%s|R_(Pos|Neg)Inf|R_.*Value$|R_.*Handlers$", p13);
    check L22() else D21();
  D21():
    deopt 67 [r28];
  L22():
    st pat = r28;
    syms11 = ld syms;
    check L23() else D22();
  D22():
    deopt 69 [syms11];
  L23():
    syms12 = force? syms11;
    checkMissing(syms12);
    c1 = `is.object`(syms12);
    if c1 then L24() else L25(syms12);
  L0(dx3):
    popenv;
    return dx3;
  L24():
    dr2 = tryDispatchBuiltin.1("[", syms12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(syms14):
    grepl = ldf grepl;
    check L27() else D23();
  D23():
    deopt 72 [syms14];
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  L27():
    p14 = prom<V +>{
      pat20 = ld pat;
      pat21 = force? pat20;
      checkMissing(pat21);
      return pat21;
    };
    p15 = prom<V +>{
      syms15 = ld syms;
      syms16 = force? syms15;
      checkMissing(syms16);
      return syms16;
    };
    r31 = dyn grepl(p14, p15);
    check L28() else D24();
  D24():
    deopt 75 [syms14, r31];
  L28():
    r32 = `!`(r31);
    __1 = ldf `[` in base;
    r33 = dyn __1(syms14, r32);
    goto L0(r33);
  }
}