fun main() {
  () -+> V { reg r:cls, reg rnorm:cls, reg r1:V, reg PP_test:cls, reg x:*, reg x1:V, reg p:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x2:*, reg x3:V, reg cumsum:cls, reg r6:V, reg PP_test1:cls, reg y:*, reg y1:V, reg p1:p(V +), reg r8:V |
    mkenv;
    r = clos inner2362538415;
    st `PP.test` = r;
    rnorm = ldf rnorm;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    r1 = dyn rnorm(1000.0);
    check L2() else D1();
  D1():
    deopt 6 [r1];
  L2():
    st x = r1;
    PP_test = ldf `PP.test`;
    check L3() else D2();
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r3 = dyn PP_test(p);
    check L4() else D3();
  D3():
    deopt 11 [r3];
  L4():
    sym = ldf cumsum;
    base = ldf cumsum in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r5):
    st y = r5;
    PP_test1 = ldf `PP.test`;
    check L9() else D6();
  L5():
    x2 = ld x;
    check L7() else D4();
  L6():
    r4 = dyn base(<sym x>);
    goto L0(r4);
  D4():
    deopt 14 [x2];
  D6():
    deopt 20 [];
  L7():
    x3 = force? x2;
    checkMissing(x3);
    cumsum = ldf cumsum in base;
    r6 = dyn cumsum(x3);
    check L8() else D5();
  L9():
    p1 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r8 = dyn PP_test1(p1);
    check L10() else D7();
  D5():
    deopt 17 [r6];
  D7():
    deopt 22 [r8];
  L8():
    goto L0(r6);
  L10():
    popenv;
    return r8;
  }
}
fun inner2362538415(x, lshort) {
  (reg x:*, reg lshort:*) -+> V { var x:*, var lshort:*, reg lshort_isMissing:L, reg lshort_orDefault:*, reg NCOL:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg substitute:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg embed:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r11:V, reg z:*, reg z1:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg z4:*, reg z5:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg yt:*, reg yt1:V, reg length:cls, reg r16:V, reg n:*, reg n1:V, reg r17:V, reg n2:*, reg n3:V, reg r18:V, reg r19:V, reg lm:cls, reg __2:cls, reg r20:V, reg p3:p(V +), reg r22:V, reg res:*, reg res1:V, reg c3:L, reg res3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r23:V, reg r24:V, reg c4:L, reg stop1:cls, reg r25:V, reg coef:cls, reg summary:cls, reg res4:*, reg res5:V, reg p4:p(V +), reg r28:V, reg p5:p(V +), reg r30:V, reg cf:*, reg cf1:V, reg c5:L, reg cf3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r31:V, reg r32:V, reg cf4:*, reg cf5:V, reg c6:L, reg r34:V, reg cf7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg r36:V, reg dx9:V, reg __4:cls, reg r37:V, reg r38:V, reg residuals:cls, reg res6:*, reg res7:V, reg p6:p(V +), reg r40:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r41:V, reg r42:V, reg u:*, reg u1:V, reg r43:V, reg sum:cls, reg r44:V, reg n4:*, reg n5:V, reg r45:V, reg lshort1:*, reg lshort2:V, reg c7:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r46:V, reg r47:V, reg n6:*, reg n7:V, reg r48:V, reg r49:V, reg r50:V, reg trunc:cls, reg r51:V, reg r52:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r53:V, reg n8:*, reg n9:V, reg r54:V, reg r55:V, reg r56:V, reg trunc1:cls, reg r57:V, reg ssqru:*, reg ssqru1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r58:V, reg ssqru4:V, reg r59:V, reg C_pp_sum:*, reg C_pp_sum1:V, reg u2:*, reg u3:V, reg l:*, reg l1:V, reg vargs:dots, reg r60:V, reg r61:V, reg n10:*, reg n11:V, reg r62:V, reg n12:*, reg n13:V, reg n14:*, reg n15:V, reg r63:V, reg r64:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r67:V, reg r68:V, reg r69:V, reg yt2:*, reg yt3:V, reg r70:V, reg sum1:cls, reg r71:V, reg r72:V, reg r73:V, reg n16:*, reg n17:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r74:V, reg n20:V, reg r75:V, reg yt4:*, reg yt5:V, reg n21:*, reg n22:V, reg r76:V, reg r77:V, reg sum2:cls, reg r78:V, reg r79:V, reg r80:V, reg n23:*, reg n24:V, reg n25:*, reg n26:V, reg r81:V, reg r82:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r85:V, reg r86:V, reg r87:V, reg yt6:*, reg yt7:V, reg n27:*, reg n28:V, reg r88:V, reg r89:V, reg sum3:cls, reg r90:V, reg r91:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r94:V, reg r95:V, reg r96:V, reg yt8:*, reg yt9:V, reg sum4:cls, reg r97:V, reg r98:V, reg n29:*, reg n30:V, reg n31:*, reg n32:V, reg r99:V, reg r100:V, reg n33:*, reg n34:V, reg r101:V, reg r102:V, reg r103:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r106:V, reg r107:V, reg r108:V, reg yt10:*, reg yt11:V, reg sum5:cls, reg r109:V, reg r110:V, reg r111:V, reg r112:V, reg trm1:*, reg trm2:V, reg trm3:*, reg trm4:V, reg r113:V, reg trm5:*, reg trm6:V, reg r114:V, reg trm7:*, reg trm8:V, reg r115:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r116:V, reg r117:V, reg ssqru5:*, reg ssqru6:V, reg r118:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r121:V, reg r122:V, reg r123:V, reg ssqrtl:*, reg ssqrtl1:V, reg r124:V, reg r125:V, reg tstat:*, reg tstat1:V, reg r126:V, reg n35:*, reg n36:V, reg r127:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r134:V, reg r135:V, reg r136:V, reg r137:R, reg r138:V, reg r139:V, reg r140:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r147:V, reg r148:V, reg r149:V, reg r150:V, reg r151:V, reg Dx:*, reg Dx1:V, reg r152:V, reg r153:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r160:V, reg r161:V, reg r162:V, reg r163:V, reg r164:V, reg ssqrtl2:*, reg ssqrtl3:V, reg r165:V, reg r166:V, reg r167:V, reg ssqrtl4:*, reg ssqrtl5:V, reg ssqru7:*, reg ssqru8:V, reg r168:V, reg r169:V, reg r170:V, reg cbind:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r171:V, reg r172:V, reg c8:cls, reg r173:V, reg p7:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r175:V, reg r176:V, reg c9:cls, reg r177:V, reg p8:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r179:V, reg r180:V, reg c10:cls, reg r181:V, reg p9:p(V +), reg sym19:cls, reg base19:cls, reg guard19:L, reg r183:V, reg r184:V, reg c11:cls, reg r185:V, reg p10:p(V +), reg sym20:cls, reg base20:cls, reg guard20:L, reg r187:V, reg r188:V, reg c12:cls, reg r189:V, reg p11:p(V +), reg sym21:cls, reg base21:cls, reg guard21:L, reg r191:V, reg r192:V, reg c13:cls, reg r193:V, reg p12:p(V +), reg sym22:cls, reg base22:cls, reg guard22:L, reg r195:V, reg r196:V, reg c14:cls, reg r197:V, reg p13:p(V +), reg sym23:cls, reg base23:cls, reg guard23:L, reg r199:V, reg r200:V, reg c15:cls, reg r201:V, reg p14:p(V +), reg r203:V, reg table:*, reg table1:V, reg r204:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r205:V, reg r206:V, reg table2:*, reg table3:V, reg dim:cls, reg r207:V, reg c16:L, reg r209:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r210:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r211:V, reg r212:V, reg c17:cls, reg r213:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r214:V, reg r215:V, reg c18:cls, reg r216:V, reg numeric:cls, reg tablen:*, reg tablen1:V, reg p15:p(V +), reg r218:V, reg tablen2:*, reg tablen3:V, reg r219:V, reg s:V, reg l2:I, reg i:I, reg i1:I, reg i2:I, reg c19:L, reg x5:V, reg approx:cls, reg tableT:*, reg tableT1:V, reg p16:p(V +), reg table4:*, reg table5:V, reg c20:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg i5:*, reg i6:V, reg __6:cls, reg r221:V, reg p17:p(V +), reg n37:*, reg n38:V, reg p18:p(V +), reg r224:V, reg c21:L, reg i8:I, reg r226:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i10:I, reg dx15:V, reg r227:V, reg l3:*, reg c22:L, reg i12:I, reg dx17:V, reg l5:*, reg dr16:V, reg dc8:L, reg dx19:V, reg i14:I, reg dx21:V, reg i15:*, reg i16:V, reg ___:cls, reg r228:V, reg approx1:cls, reg tableipl:*, reg tableipl1:V, reg p19:p(V +), reg tablep:*, reg tablep1:V, reg p20:p(V +), reg STAT:*, reg STAT1:V, reg p21:p(V +), reg r232:V, reg c23:L, reg r234:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r235:V, reg l6:*, reg l7:V, reg l8:*, reg names__:cls, reg r236:V, reg l9:*, reg names__1:cls, reg r237:V, reg structure:cls, reg sym27:cls, reg base27:cls, reg guard27:L, reg r238:V, reg r239:V, reg STAT2:*, reg STAT3:V, reg PARAMETER:*, reg PARAMETER1:V, reg PVAL:*, reg PVAL1:V, reg METHOD:*, reg METHOD1:V, reg DNAME:*, reg DNAME1:V, reg list:cls, reg r240:V, reg p22:p(V +), reg r242:V |
    mkenv;
    st x = x;
    lshort_isMissing = missing.0(lshort);
    if lshort_isMissing then L0(TRUE) else L0(lshort);
  L0(lshort_orDefault):
    st lshort = lshort_orDefault;
    NCOL = ldf NCOL;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn NCOL(p);
    check L33() else D1();
  D1():
    deopt 3 [r1];
  L33():
    r2 = `>`(r1, 1.0);
    c = `as.logical`(r2);
    if c then L34() else L1();
  L1():
    goto L2();
  L2():
    deparse1 = ldf deparse1;
    check L38() else D4();
  L34():
    stop = ldf stop;
    check L35() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 13 [];
  L35():
    r3 = dyn stop("x is not a vector or univariate time series");
    check L36() else D3();
  L38():
    p1 = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      substitute = ldf substitute in base;
      r7 = dyn substitute(<sym x>);
      goto L0(r7);
    L2():
      r5 = dyn base(<sym x>);
      goto L0(r5);
    };
    r9 = dyn deparse1(p1);
    check L39() else D5();
  D3():
    deopt 9 [r3];
  D5():
    deopt 15 [r9];
  L36():
    goto L2();
  L39():
    st DNAME = r9;
    embed = ldf embed;
    check L40() else D6();
  D6():
    deopt 18 [];
  L40():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r11 = dyn embed(p2, 2.0);
    check L41() else D7();
  D7():
    deopt 21 [r11];
  L41():
    st z = r11;
    z = ld z;
    check L42() else D8();
  D8():
    deopt 23 [z];
  L42():
    z1 = force? z;
    checkMissing(z1);
    c1 = `is.object`(z1);
    if c1 then L43() else L44();
  L3(dx1):
    st yt = dx1;
    z4 = ld z;
    check L46() else D9();
  L43():
    dr = tryDispatchBuiltin.1("[", z1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L45() else L44();
  L44():
    __ = ldf `[` in base;
    r12 = dyn __(z1, <missing>, 1.0);
    goto L3(r12);
  D9():
    deopt 30 [z4];
  L45():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L46():
    z5 = force? z4;
    checkMissing(z5);
    c2 = `is.object`(z5);
    if c2 then L47() else L48();
  L4(dx3):
    st yt1 = dx3;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L50() else L51();
  L47():
    dr2 = tryDispatchBuiltin.1("[", z5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L49() else L48();
  L48():
    __1 = ldf `[` in base;
    r13 = dyn __1(z5, <missing>, 2.0);
    goto L4(r13);
  L5(r15):
    st n = r15;
    n = ld n;
    check L54() else D12();
  L49():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L50():
    yt = ld yt;
    check L52() else D10();
  L51():
    r14 = dyn base1(<sym yt>);
    goto L5(r14);
  D10():
    deopt 39 [yt];
  D12():
    deopt 45 [1, n];
  L52():
    yt1 = force? yt;
    checkMissing(yt1);
    length = ldf length in base;
    r16 = dyn length(yt1);
    check L53() else D11();
  L54():
    n1 = force? n;
    checkMissing(n1);
    r17 = `:`(1, n1);
    n2 = ld n;
    check L55() else D13();
  D11():
    deopt 42 [r16];
  D13():
    deopt 47 [r17, n2];
  L53():
    goto L5(r16);
  L55():
    n3 = force? n2;
    checkMissing(n3);
    r18 = `/`(n3, 2.0);
    r19 = `-`(r17, r18);
    st u = r19;
    lm = ldf lm;
    check L56() else D14();
  D14():
    deopt 54 [];
  L56():
    p3 = prom<V +>{
      __2 = ldf `~` in base;
      r20 = dyn __2(<sym yt>, <lang `+`(`+`(1.0, u), yt1)>);
      return r20;
    };
    r22 = dyn lm(p3);
    check L57() else D15();
  D15():
    deopt 56 [r22];
  L57():
    st res = r22;
    res = ld res;
    check L58() else D16();
  D16():
    deopt 58 [res];
  L58():
    res1 = force? res;
    checkMissing(res1);
    c3 = `is.object`(res1);
    if c3 then L60() else L61(res1);
  L59(dx5):
    r24 = `<`(dx5, 3.0);
    c4 = `as.logical`(r24);
    if c4 then L63() else L6();
  L60():
    dr4 = tryDispatchBuiltin.1("$", res1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L62() else L61(dr4);
  L61(res3):
    r23 = `$`(res3, <sym rank>);
    goto L59(r23);
  L6():
    goto L7();
  L7():
    coef = ldf coef;
    check L67() else D19();
  L62():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L59(dx4);
  L63():
    stop1 = ldf stop;
    check L64() else D17();
  D17():
    deopt 64 [];
  D19():
    deopt 70 [];
  L64():
    r25 = dyn stop1("singularities in regression");
    check L65() else D18();
  L67():
    p5 = prom<V +>{
      summary = ldf summary;
      p4 = prom<V +>{
        res4 = ld res;
        res5 = force? res4;
        checkMissing(res5);
        return res5;
      };
      r28 = dyn summary(p4);
      return r28;
    };
    r30 = dyn coef(p5);
    check L68() else D20();
  D18():
    deopt 66 [r25];
  D20():
    deopt 72 [r30];
  L65():
    goto L7();
  L68():
    st cf = r30;
    cf = ld cf;
    check L69() else D21();
  D21():
    deopt 74 [cf];
  L69():
    cf1 = force? cf;
    checkMissing(cf1);
    c5 = `is.object`(cf1);
    if c5 then L70() else L71(cf1);
  L8(dx7):
    r32 = `-`(dx7, 1.0);
    cf4 = ld cf;
    check L73() else D22();
  L70():
    dr6 = tryDispatchBuiltin.1("[", cf1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L72() else L71(dr6);
  L71(cf3):
    __3 = ldf `[` in base;
    r31 = dyn __3(cf3, 3.0, 1.0);
    goto L8(r31);
  D22():
    deopt 81 [r32, cf4];
  L72():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx6);
  L73():
    cf5 = force? cf4;
    checkMissing(cf5);
    c6 = `is.object`(cf5);
    if c6 then L74() else L75(r32, cf5);
  L9(r36, dx9):
    r38 = `/`(r36, dx9);
    st tstat = r38;
    residuals = ldf residuals;
    check L77() else D23();
  L74():
    dr8 = tryDispatchBuiltin.1("[", cf5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L76() else L75(r32, dr8);
  L75(r34, cf7):
    __4 = ldf `[` in base;
    r37 = dyn __4(cf7, 3.0, 2.0);
    goto L9(r34, r37);
  D23():
    deopt 90 [];
  L76():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L9(r32, dx8);
  L77():
    p6 = prom<V +>{
      res6 = ld res;
      res7 = force? res6;
      checkMissing(res7);
      return res7;
    };
    r40 = dyn residuals(p6);
    check L78() else D24();
  D24():
    deopt 92 [r40];
  L78():
    st u = r40;
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L79() else L80();
  L10(r42):
    n4 = ld n;
    check L83() else D27();
  L79():
    u = ld u;
    check L81() else D25();
  L80():
    r41 = dyn base2(<lang `^`(u, 2.0)>);
    goto L10(r41);
  D25():
    deopt 96 [u];
  D27():
    deopt 101 [r42, n4];
  L81():
    u1 = force? u;
    checkMissing(u1);
    r43 = `^`(u1, 2.0);
    sum = ldf sum in base;
    r44 = dyn sum(r43);
    check L82() else D26();
  L83():
    n5 = force? n4;
    checkMissing(n5);
    r45 = `/`(r42, n5);
    st ssqru = r45;
    lshort1 = ld lshort;
    check L84() else D28();
  D26():
    deopt 101 [r44];
  D28():
    deopt 105 [lshort1];
  L82():
    goto L10(r44);
  L84():
    lshort2 = force? lshort1;
    checkMissing(lshort2);
    c7 = `as.logical`(lshort2);
    if c7 then L85() else L11();
  L11():
    sym4 = ldf trunc;
    base4 = ldf trunc in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L91() else L92();
  L13(r52):
    st l = r52;
    ssqru = ld ssqru;
    check L95() else D33();
  L85():
    sym3 = ldf trunc;
    base3 = ldf trunc in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L86() else L87();
  D33():
    deopt 132 [ssqru];
  L12(r47):
    goto L13(r47);
  L86():
    n6 = ld n;
    check L88() else D29();
  L87():
    r46 = dyn base3(<lang `*`(4.0, `^`(`(`(`/`(n, 100.0)), 0.25))>);
    goto L12(r46);
  L91():
    n8 = ld n;
    check L93() else D31();
  L92():
    r53 = dyn base4(<lang `*`(12.0, `^`(`(`(`/`(n, 100.0)), 0.25))>);
    goto L13(r53);
  L95():
    ssqru1 = force? ssqru;
    checkMissing(ssqru1);
    sym5 = ldf `.Call`;
    base5 = ldf `.Call` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L96() else L97();
  D29():
    deopt 110 [4.0, n6];
  D31():
    deopt 122 [12.0, n8];
  L14(ssqru4, r59):
    r61 = `+`(ssqru4, r59);
    st ssqrtl = r61;
    n10 = ld n;
    check L101() else D37();
  L88():
    n7 = force? n6;
    checkMissing(n7);
    r48 = `/`(n7, 100.0);
    r49 = `^`(r48, 0.25);
    r50 = `*`(4.0, r49);
    trunc = ldf trunc in base;
    r51 = dyn trunc(r50);
    check L89() else D30();
  L93():
    n9 = force? n8;
    checkMissing(n9);
    r54 = `/`(n9, 100.0);
    r55 = `^`(r54, 0.25);
    r56 = `*`(12.0, r55);
    trunc1 = ldf trunc in base;
    r57 = dyn trunc1(r56);
    check L94() else D32();
  L96():
    C_pp_sum = ld C_pp_sum;
    check L98() else D34();
  L97():
    r58 = dyn base5(<sym C_pp_sum>, <sym u>, <sym l>);
    goto L14(ssqru1, r58);
  D30():
    deopt 118 [r51];
  D32():
    deopt 130 [r57];
  D34():
    deopt 134 [ssqru1, C_pp_sum];
  D37():
    deopt 141 [n10];
  L89():
    goto L12(r51);
  L94():
    goto L13(r57);
  L98():
    C_pp_sum1 = force? C_pp_sum;
    checkMissing(C_pp_sum1);
    u2 = ld u;
    check L99() else D35();
  L101():
    n11 = force? n10;
    checkMissing(n11);
    r62 = `^`(n11, 2.0);
    st n2 = r62;
    n12 = ld n2;
    check L102() else D38();
  D35():
    deopt 135 [ssqru1, C_pp_sum1, u2];
  D38():
    deopt 146 [n12];
  L99():
    u3 = force? u2;
    checkMissing(u3);
    l = ld l;
    check L100() else D36();
  L102():
    n13 = force? n12;
    checkMissing(n13);
    n14 = ld n2;
    check L103() else D39();
  D36():
    deopt 136 [ssqru1, C_pp_sum1, u3, l];
  D39():
    deopt 147 [n13, n14];
  L100():
    l1 = force? l;
    checkMissing(l1);
    vargs = dots[u3, l1];
    r60 = `.Call`(C_pp_sum1, vargs, <missing>);
    goto L14(ssqru1, r60);
  L103():
    n15 = force? n14;
    checkMissing(n15);
    r63 = `-`(n15, 1.0);
    r64 = `*`(n13, r63);
    sym6 = ldf sum;
    base6 = ldf sum in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L104() else L105();
  L15(r68, r69):
    r72 = `*`(r68, r69);
    r73 = `/`(r72, 12.0);
    st trm1 = r73;
    n16 = ld n;
    check L108() else D42();
  L104():
    yt2 = ld yt1;
    check L106() else D40();
  L105():
    r67 = dyn base6(<lang `^`(yt1, 2.0)>);
    goto L15(r64, r67);
  D40():
    deopt 153 [r64, yt2];
  D42():
    deopt 163 [n16];
  L106():
    yt3 = force? yt2;
    checkMissing(yt3);
    r70 = `^`(yt3, 2.0);
    sum1 = ldf sum in base;
    r71 = dyn sum1(r70);
    check L107() else D41();
  L108():
    n17 = force? n16;
    checkMissing(n17);
    sym7 = ldf sum;
    base7 = ldf sum in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L109() else L110();
  D41():
    deopt 158 [r64, r71];
  L16(n20, r75):
    r79 = `^`(r75, 2.0);
    r80 = `*`(n20, r79);
    st trm2 = r80;
    n23 = ld n;
    check L114() else D46();
  L107():
    goto L15(r64, r71);
  L109():
    yt4 = ld yt1;
    check L111() else D43();
  L110():
    r74 = dyn base7(<lang `*`(yt1, `(`(`:`(1, n)))>);
    goto L16(n17, r74);
  D43():
    deopt 166 [n17, yt4];
  D46():
    deopt 178 [n23];
  L111():
    yt5 = force? yt4;
    checkMissing(yt5);
    n21 = ld n;
    check L112() else D44();
  L114():
    n24 = force? n23;
    checkMissing(n24);
    n25 = ld n;
    check L115() else D47();
  D44():
    deopt 168 [n17, yt5, 1, n21];
  D47():
    deopt 179 [n24, n25];
  L112():
    n22 = force? n21;
    checkMissing(n22);
    r76 = `:`(1, n22);
    r77 = `*`(yt5, r76);
    sum2 = ldf sum in base;
    r78 = dyn sum2(r77);
    check L113() else D45();
  L115():
    n26 = force? n25;
    checkMissing(n26);
    r81 = `+`(n26, 1.0);
    r82 = `*`(n24, r81);
    sym8 = ldf sum;
    base8 = ldf sum in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L116() else L117();
  D45():
    deopt 173 [n17, r78];
  L17(r86, r87):
    r91 = `*`(r86, r87);
    sym9 = ldf sum;
    base9 = ldf sum in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L121() else L122();
  L113():
    goto L16(n17, r78);
  L116():
    yt6 = ld yt1;
    check L118() else D48();
  L117():
    r85 = dyn base8(<lang `*`(yt1, `(`(`:`(1, n)))>);
    goto L17(r82, r85);
  D48():
    deopt 185 [r82, yt6];
  L18(r95, r96):
    r98 = `*`(r95, r96);
    st trm3 = r98;
    n29 = ld n;
    check L125() else D53();
  L118():
    yt7 = force? yt6;
    checkMissing(yt7);
    n27 = ld n;
    check L119() else D49();
  L121():
    yt8 = ld yt1;
    check L123() else D51();
  L122():
    r94 = dyn base9(<sym yt1>);
    goto L18(r91, r94);
  D49():
    deopt 187 [r82, yt7, 1, n27];
  D51():
    deopt 195 [r91, yt8];
  D53():
    deopt 201 [n29];
  L119():
    n28 = force? n27;
    checkMissing(n28);
    r88 = `:`(1, n28);
    r89 = `*`(yt7, r88);
    sum3 = ldf sum in base;
    r90 = dyn sum3(r89);
    check L120() else D50();
  L123():
    yt9 = force? yt8;
    checkMissing(yt9);
    sum4 = ldf sum in base;
    r97 = dyn sum4(yt9);
    check L124() else D52();
  L125():
    n30 = force? n29;
    checkMissing(n30);
    n31 = ld n;
    check L126() else D54();
  D50():
    deopt 192 [r82, r90];
  D52():
    deopt 198 [r91, r97];
  D54():
    deopt 202 [n30, n31];
  L120():
    goto L17(r82, r90);
  L124():
    goto L18(r91, r97);
  L126():
    n32 = force? n31;
    checkMissing(n32);
    r99 = `+`(n32, 1.0);
    r100 = `*`(n30, r99);
    n33 = ld n;
    check L127() else D55();
  D55():
    deopt 207 [r100, 2.0, n33];
  L127():
    n34 = force? n33;
    checkMissing(n34);
    r101 = `*`(2.0, n34);
    r102 = `+`(r101, 1.0);
    r103 = `*`(r100, r102);
    sym10 = ldf sum;
    base10 = ldf sum in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L128() else L129();
  L19(r107, r108):
    r110 = `^`(r108, 2.0);
    r111 = `*`(r107, r110);
    r112 = `/`(r111, 6.0);
    st trm4 = r112;
    trm1 = ld trm1;
    check L132() else D58();
  L128():
    yt10 = ld yt1;
    check L130() else D56();
  L129():
    r106 = dyn base10(<sym yt1>);
    goto L19(r103, r106);
  D56():
    deopt 214 [r103, yt10];
  D58():
    deopt 224 [trm1];
  L130():
    yt11 = force? yt10;
    checkMissing(yt11);
    sum5 = ldf sum in base;
    r109 = dyn sum5(yt11);
    check L131() else D57();
  L132():
    trm2 = force? trm1;
    checkMissing(trm2);
    trm3 = ld trm2;
    check L133() else D59();
  D57():
    deopt 217 [r103, r109];
  D59():
    deopt 225 [trm2, trm3];
  L131():
    goto L19(r103, r109);
  L133():
    trm4 = force? trm3;
    checkMissing(trm4);
    r113 = `-`(trm2, trm4);
    trm5 = ld trm3;
    check L134() else D60();
  D60():
    deopt 227 [r113, trm5];
  L134():
    trm6 = force? trm5;
    checkMissing(trm6);
    r114 = `+`(r113, trm6);
    trm7 = ld trm4;
    check L135() else D61();
  D61():
    deopt 229 [r114, trm7];
  L135():
    trm8 = force? trm7;
    checkMissing(trm8);
    r115 = `-`(r114, trm8);
    st Dx = r115;
    sym11 = ldf sqrt;
    base11 = ldf sqrt in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L136() else L137();
  L20(r117):
    sym12 = ldf sqrt;
    base12 = ldf sqrt in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L139() else L140();
  L136():
    ssqru5 = ld ssqru;
    check L138() else D62();
  L137():
    r116 = dyn base11(<sym ssqru>);
    goto L20(r116);
  D62():
    deopt 234 [ssqru5];
  L21(r122, r123):
    r125 = `/`(r122, r123);
    tstat = ld tstat;
    check L142() else D64();
  L138():
    ssqru6 = force? ssqru5;
    checkMissing(ssqru6);
    r118 = sqrt(ssqru6);
    goto L20(r118);
  L139():
    ssqrtl = ld ssqrtl;
    check L141() else D63();
  L140():
    r121 = dyn base12(<sym ssqrtl>);
    goto L21(r117, r121);
  D63():
    deopt 237 [r117, ssqrtl];
  D64():
    deopt 240 [r125, tstat];
  L141():
    ssqrtl1 = force? ssqrtl;
    checkMissing(ssqrtl1);
    r124 = sqrt(ssqrtl1);
    goto L21(r117, r124);
  L142():
    tstat1 = force? tstat;
    checkMissing(tstat1);
    r126 = `*`(r125, tstat1);
    n35 = ld n;
    check L143() else D65();
  D65():
    deopt 242 [r126, n35];
  L143():
    n36 = force? n35;
    checkMissing(n36);
    r127 = `^`(n36, 3.0);
    sym13 = ldf sqrt;
    base13 = ldf sqrt in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L144() else L145();
  L22(r135, r136, r137, r138):
    r140 = `*`(r137, r138);
    sym14 = ldf sqrt;
    base14 = ldf sqrt in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L146() else L147();
  L144():
    r139 = sqrt(3.0);
    goto L22(r126, r127, 4.0, r139);
  L145():
    r134 = dyn base13(3.0);
    goto L22(r126, r127, 4.0, r134);
  L23(r148, r149, r150, r151):
    r153 = `*`(r150, r151);
    sym15 = ldf sqrt;
    base15 = ldf sqrt in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L149() else L150();
  L146():
    Dx = ld Dx;
    check L148() else D66();
  L147():
    r147 = dyn base14(<sym Dx>);
    goto L23(r135, r136, r140, r147);
  D66():
    deopt 251 [r135, r136, r140, Dx];
  L24(r161, r162, r163, r164):
    r166 = `*`(r163, r164);
    r167 = `/`(r162, r166);
    ssqrtl4 = ld ssqrtl;
    check L152() else D68();
  L148():
    Dx1 = force? Dx;
    checkMissing(Dx1);
    r152 = sqrt(Dx1);
    goto L23(r135, r136, r140, r152);
  L149():
    ssqrtl2 = ld ssqrtl;
    check L151() else D67();
  L150():
    r160 = dyn base15(<sym ssqrtl>);
    goto L24(r148, r149, r153, r160);
  D67():
    deopt 255 [r148, r149, r153, ssqrtl2];
  D68():
    deopt 259 [r161, r167, ssqrtl4];
  L151():
    ssqrtl3 = force? ssqrtl2;
    checkMissing(ssqrtl3);
    r165 = sqrt(ssqrtl3);
    goto L24(r148, r149, r153, r165);
  L152():
    ssqrtl5 = force? ssqrtl4;
    checkMissing(ssqrtl5);
    ssqru7 = ld ssqru;
    check L153() else D69();
  D69():
    deopt 260 [r161, r167, ssqrtl5, ssqru7];
  L153():
    ssqru8 = force? ssqru7;
    checkMissing(ssqru8);
    r168 = `-`(ssqrtl5, ssqru8);
    r169 = `*`(r167, r168);
    r170 = `-`(r161, r169);
    st STAT = r170;
    cbind = ldf cbind;
    check L154() else D70();
  D70():
    deopt 267 [];
  L154():
    p7 = prom<V +>{
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r172):
      return r172;
    L1():
      c8 = ldf c in base;
      r173 = dyn c8(4.38, 4.15, 4.04, 3.99, 3.98, 3.96);
      goto L0(r173);
    L2():
      r171 = dyn base16(4.38, 4.15, 4.04, 3.99, 3.98, 3.96);
      goto L0(r171);
    };
    p8 = prom<V +>{
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r176):
      return r176;
    L1():
      c9 = ldf c in base;
      r177 = dyn c9(3.95, 3.8, 3.73, 3.69, 3.68, 3.66);
      goto L0(r177);
    L2():
      r175 = dyn base17(3.95, 3.8, 3.73, 3.69, 3.68, 3.66);
      goto L0(r175);
    };
    p9 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r180):
      return r180;
    L1():
      c10 = ldf c in base;
      r181 = dyn c10(3.6, 3.5, 3.45, 3.43, 3.42, 3.41);
      goto L0(r181);
    L2():
      r179 = dyn base18(3.6, 3.5, 3.45, 3.43, 3.42, 3.41);
      goto L0(r179);
    };
    p10 = prom<V +>{
      sym19 = ldf c;
      base19 = ldf c in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r184):
      return r184;
    L1():
      c11 = ldf c in base;
      r185 = dyn c11(3.24, 3.18, 3.15, 3.13, 3.13, 3.12);
      goto L0(r185);
    L2():
      r183 = dyn base19(3.24, 3.18, 3.15, 3.13, 3.13, 3.12);
      goto L0(r183);
    };
    p11 = prom<V +>{
      sym20 = ldf c;
      base20 = ldf c in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r188):
      return r188;
    L1():
      c12 = ldf c in base;
      r189 = dyn c12(1.14, 1.19, 1.22, 1.23, 1.24, 1.25);
      goto L0(r189);
    L2():
      r187 = dyn base20(1.14, 1.19, 1.22, 1.23, 1.24, 1.25);
      goto L0(r187);
    };
    p12 = prom<V +>{
      sym21 = ldf c;
      base21 = ldf c in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L1() else L2();
    L0(r192):
      return r192;
    L1():
      c13 = ldf c in base;
      r193 = dyn c13(0.8, 0.87, 0.9, 0.92, 0.93, 0.94);
      goto L0(r193);
    L2():
      r191 = dyn base21(0.8, 0.87, 0.9, 0.92, 0.93, 0.94);
      goto L0(r191);
    };
    p13 = prom<V +>{
      sym22 = ldf c;
      base22 = ldf c in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r196):
      return r196;
    L1():
      c14 = ldf c in base;
      r197 = dyn c14(0.5, 0.58, 0.62, 0.64, 0.65, 0.66);
      goto L0(r197);
    L2():
      r195 = dyn base22(0.5, 0.58, 0.62, 0.64, 0.65, 0.66);
      goto L0(r195);
    };
    p14 = prom<V +>{
      sym23 = ldf c;
      base23 = ldf c in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r200):
      return r200;
    L1():
      c15 = ldf c in base;
      r201 = dyn c15(0.15, 0.24, 0.28, 0.31, 0.32, 0.33);
      goto L0(r201);
    L2():
      r199 = dyn base23(0.15, 0.24, 0.28, 0.31, 0.32, 0.33);
      goto L0(r199);
    };
    r203 = dyn cbind(p7, p8, p9, p10, p11, p12, p13, p14);
    check L155() else D71();
  D71():
    deopt 276 [r203];
  L155():
    st table = r203;
    table = ld table;
    check L156() else D72();
  D72():
    deopt 278 [table];
  L156():
    table1 = force? table;
    checkMissing(table1);
    r204 = `-`(<missing>, table1);
    st table = r204;
    sym24 = ldf dim;
    base24 = ldf dim in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L157() else L158();
  L25(r206):
    c16 = `is.object`(r206);
    if c16 then L161() else L162(r206);
  L157():
    table2 = ld table;
    check L159() else D73();
  L158():
    r205 = dyn base24(<sym table>);
    goto L25(r205);
  D73():
    deopt 284 [table2];
  L26(dx11):
    st tablen = dx11;
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L164() else L165();
  L159():
    table3 = force? table2;
    checkMissing(table3);
    dim = ldf dim in base;
    r207 = dyn dim(table3);
    check L160() else D74();
  L161():
    dr10 = tryDispatchBuiltin.1("[", r206);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L163() else L162(dr10);
  L162(r209):
    __5 = ldf `[` in base;
    r210 = dyn __5(r209, 2);
    goto L26(r210);
  D74():
    deopt 287 [r207];
  L27(r212):
    st tableT = r212;
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L167() else L168();
  L160():
    goto L25(r207);
  L163():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L26(dx10);
  L164():
    c17 = ldf c in base;
    r213 = dyn c17(25.0, 50.0, 100.0, 250.0, 500.0, 100000.0);
    check L166() else D75();
  L165():
    r211 = dyn base25(25.0, 50.0, 100.0, 250.0, 500.0, 100000.0);
    goto L27(r211);
  D75():
    deopt 301 [r213];
  L28(r215):
    st tablep = r215;
    numeric = ldf numeric;
    check L170() else D77();
  L166():
    goto L27(r213);
  L167():
    c18 = ldf c in base;
    r216 = dyn c18(0.01, 0.025, 0.05, 0.1, 0.9, 0.95, 0.975, 0.99);
    check L169() else D76();
  L168():
    r214 = dyn base26(0.01, 0.025, 0.05, 0.1, 0.9, 0.95, 0.975, 0.99);
    goto L28(r214);
  D76():
    deopt 314 [r216];
  D77():
    deopt 317 [];
  L169():
    goto L28(r216);
  L170():
    p15 = prom<V +>{
      tablen = ld tablen;
      tablen1 = force? tablen;
      checkMissing(tablen1);
      return tablen1;
    };
    r218 = dyn numeric(p15);
    check L171() else D78();
  D78():
    deopt 319 [r218];
  L171():
    st tableipl = r218;
    tablen2 = ld tablen;
    check L172() else D79();
  D79():
    deopt 322 [1, tablen2];
  L172():
    tablen3 = force? tablen2;
    checkMissing(tablen3);
    r219 = `:`(1, tablen3);
    s = toForSeq(r219);
    l2 = length(s);
    i = 0;
    goto L29(i);
  L29(i1):
    i2 = `+`.1(i1, 1);
    c19 = `<`.1(l2, i2);
    if c19 then L173() else L31();
  L31():
    x5 = `[[`(s, i2, NULL, TRUE);
    st i = x5;
    approx = ldf approx;
    check L174() else D80();
  L173():
    approx1 = ldf approx;
    check L184() else D83();
  D80():
    deopt 326 [i2];
  D83():
    deopt 343 [];
  L174():
    p16 = prom<V +>{
      tableT = ld tableT;
      tableT1 = force? tableT;
      checkMissing(tableT1);
      return tableT1;
    };
    p17 = prom<V +>{
      table4 = ld table;
      table5 = force? table4;
      checkMissing(table5);
      c20 = `is.object`(table5);
      if c20 then L1() else L2();
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", table5);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      i5 = ld i;
      i6 = force? i5;
      __6 = ldf `[` in base;
      r221 = dyn __6(table5, <missing>, i6);
      goto L0(r221);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p18 = prom<V +>{
      n37 = ld n;
      n38 = force? n37;
      checkMissing(n38);
      return n38;
    };
    r224 = dyn approx[, , , rule](p16, p17, p18, 2.0);
    check L175() else D81();
  L184():
    p19 = prom<V +>{
      tableipl = ld tableipl;
      tableipl1 = force? tableipl;
      checkMissing(tableipl1);
      return tableipl1;
    };
    p20 = prom<V +>{
      tablep = ld tablep;
      tablep1 = force? tablep;
      checkMissing(tablep1);
      return tablep1;
    };
    p21 = prom<V +>{
      STAT = ld STAT;
      STAT1 = force? STAT;
      checkMissing(STAT1);
      return STAT1;
    };
    r232 = dyn approx1[, , , rule](p19, p20, p21, 2.0);
    check L185() else D84();
  D81():
    deopt 332 [i2, r224];
  D84():
    deopt 349 [r232];
  L175():
    c21 = `is.object`(r224);
    if c21 then L177() else L178(i2, r224);
  L185():
    c23 = `is.object`(r232);
    if c23 then L187() else L188(r232);
  L176(i10, dx15):
    l3 = ld tableipl;
    c22 = `is.object`(l3);
    if c22 then L180() else L181(i10, dx15, l3);
  L177():
    dr14 = tryDispatchBuiltin.1("$", r224);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L179() else L178(i2, dr14);
  L178(i8, r226):
    r227 = `$`(r226, <sym y>);
    goto L176(i8, r227);
  L186(dx23):
    st PVAL = dx23;
    l6 = ld l;
    check L190() else D85();
  L187():
    dr18 = tryDispatchBuiltin.1("$", r232);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L189() else L188(dr18);
  L188(r234):
    r235 = `$`(r234, <sym y>);
    goto L186(r235);
  D85():
    deopt 352 [l6];
  L30(i14, dx21):
    st tableipl = dx21;
    goto L29(i14);
  L179():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L176(i2, dx14);
  L180():
    dr16 = tryDispatchBuiltin.0("[<-", l3, dx15);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L182() else L181(i10, dx15, dr16);
  L181(i12, dx17, l5):
    i15 = ld i;
    check L183() else D82();
  L189():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L186(dx22);
  L190():
    l7 = force? l6;
    checkMissing(l7);
    st PARAMETER = l7;
    st METHOD = "Phillips-Perron Unit Root Test";
    l8 = ld STAT;
    names__ = ldf `names<-`;
    check L191() else D86();
  D82():
    deopt 335 [i12, dx17, l5, dx15, i15];
  D86():
    deopt 361 ["Dickey-Fuller", l8, "Dickey-Fuller"];
  L182():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L30(i10, dx19);
  L183():
    i16 = force? i15;
    ___ = ldf `[<-` in base;
    r228 = dyn ___(l5, dx15, i16);
    goto L30(i12, r228);
  L191():
    r236 = dyn names__(l8, NULL, "Dickey-Fuller");
    check L192() else D87();
  D87():
    deopt 363 ["Dickey-Fuller", r236];
  L192():
    st STAT = r236;
    l9 = ld PARAMETER;
    names__1 = ldf `names<-`;
    check L193() else D88();
  D88():
    deopt 368 ["Truncation lag parameter", l9, "Truncation lag parameter"];
  L193():
    r237 = dyn names__1(l9, NULL, "Truncation lag parameter");
    check L194() else D89();
  D89():
    deopt 370 ["Truncation lag parameter", r237];
  L194():
    st PARAMETER = r237;
    structure = ldf structure;
    check L195() else D90();
  D90():
    deopt 373 [];
  L195():
    p22 = prom<V +>{
      sym27 = ldf list;
      base27 = ldf list in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L1() else L2();
    L0(r239):
      return r239;
    L1():
      STAT2 = ld STAT;
      STAT3 = force? STAT2;
      checkMissing(STAT3);
      PARAMETER = ld PARAMETER;
      PARAMETER1 = force? PARAMETER;
      checkMissing(PARAMETER1);
      PVAL = ld PVAL;
      PVAL1 = force? PVAL;
      checkMissing(PVAL1);
      METHOD = ld METHOD;
      METHOD1 = force? METHOD;
      checkMissing(METHOD1);
      DNAME = ld DNAME;
      DNAME1 = force? DNAME;
      checkMissing(DNAME1);
      list = ldf list in base;
      r240 = dyn list(STAT3, PARAMETER1, PVAL1, METHOD1, DNAME1);
      goto L0(r240);
    L2():
      r238 = dyn base27[statistic, parameter, `p.value`, method, `data.name`](<sym STAT>, <sym PARAMETER>, <sym PVAL>, <sym METHOD>, <sym DNAME>);
      goto L0(r238);
    };
    r242 = dyn structure[, class](p22, "htest");
    check L196() else D91();
  D91():
    deopt 377 [r242];
  L196():
    popenv;
    return r242;
  }
}