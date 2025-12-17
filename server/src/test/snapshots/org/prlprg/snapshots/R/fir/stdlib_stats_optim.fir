fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3774318436;
    st optim = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3774318436(par, fn, gr, `...`, method, lower, upper, control, hessian) {
  (reg par:*, reg fn:*, reg gr:*, reg ddd:dots, reg method:*, reg lower:*, reg upper:*, reg control:*, reg hessian:*) -+> V { var par:*, var fn:*, var gr:*, reg gr_isMissing:L, reg gr_orDefault:*, var `...`:dots?, var method:*, reg method_isMissing:L, reg method_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var lower:*, reg lower_isMissing:L, reg lower_orDefault:*, reg p1:p(V +), var upper:*, reg upper_isMissing:L, reg upper_orDefault:*, var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg list:cls, reg r7:V, reg p2:p(V +), var hessian:*, reg hessian_isMissing:L, reg hessian_orDefault:*, reg r9:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg gr1:*, reg gr2:V, reg c1:V, reg r12:V, reg c2:L, reg r13:cls, reg r14:V, reg match_arg:cls, reg method1:*, reg method2:V, reg p3:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg lower1:*, reg lower2:V, reg r19:V, reg any:cls, reg r20:V, reg c3:L, reg c4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg c8:L, reg r22:V, reg upper1:*, reg upper2:V, reg r23:V, reg any1:cls, reg r24:V, reg c9:L, reg c10:V, reg c12:L, reg c14:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg c17:L, reg r26:V, reg method3:*, reg method4:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg c20:L, reg method7:V, reg r28:V, reg c21:cls, reg r29:V, reg r30:V, reg any2:cls, reg r31:V, reg r32:V, reg c22:L, reg c23:V, reg c25:L, reg warning:cls, reg r33:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg par1:*, reg par2:V, reg length:cls, reg r37:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r40:V, reg r41:V, reg npar:*, reg npar1:V, reg rep_int:cls, reg r42:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r43:V, reg r44:V, reg npar2:*, reg npar3:V, reg rep_int1:cls, reg r45:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r46:V, reg r47:V, reg _Machine:*, reg _Machine1:V, reg c26:L, reg _Machine3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r48:V, reg r49:V, reg list1:cls, reg r50:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r51:V, reg r52:V, reg con:*, reg con1:V, reg names:cls, reg r53:V, reg method8:*, reg method9:V, reg r54:V, reg c27:L, reg l:*, reg c28:L, reg r56:R, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r58:R, reg dx3:V, reg r59:V, reg method10:*, reg method11:V, reg r61:V, reg c29:L, reg l3:*, reg c30:L, reg r63:R, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r66:V, reg l6:*, reg c31:L, reg r68:R, reg l8:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r70:R, reg dx7:V, reg r71:V, reg control1:*, reg control2:V, reg l9:*, reg c32:L, reg control4:V, reg l11:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r73:V, reg control11:V, reg l14:*, reg control12:V, reg r74:V, reg control13:*, reg control14:V, reg names1:cls, reg r75:V, reg ___:cls, reg r76:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r77:V, reg r78:V, reg namc:*, reg namc1:V, reg c33:L, reg namc3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg _in_:cls, reg namc4:*, reg namc5:V, reg p4:p(V +), reg nmsC:*, reg nmsC1:V, reg p5:p(V +), reg r81:V, reg r82:V, reg __:cls, reg r83:V, reg length1:cls, reg r84:V, reg c34:L, reg warning1:cls, reg paste:cls, reg noNms:*, reg noNms1:V, reg p6:p(V +), reg r86:V, reg p7:p(V +), reg r88:V, reg con2:*, reg con3:V, reg c35:L, reg con5:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r90:V, reg r91:V, reg c36:L, reg warning2:cls, reg r92:V, reg method12:*, reg method13:V, reg r94:V, reg c37:L, reg c39:V, reg con6:*, reg con7:V, reg c40:L, reg c42:L, reg con9:V, reg dr14:V, reg dc7:L, reg dx14:V, reg c44:L, reg dx15:V, reg r95:V, reg c45:L, reg c46:V, reg c48:L, reg c50:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r96:V, reg c53:L, reg r97:V, reg con10:*, reg con11:V, reg c54:L, reg c56:L, reg con13:V, reg dr16:V, reg dc8:L, reg dx16:V, reg c58:L, reg dx17:V, reg r98:V, reg as_integer:cls, reg r99:V, reg r100:V, reg c59:L, reg c60:V, reg c62:L, reg stop:cls, reg r101:V, reg method14:*, reg method15:V, reg r102:V, reg c63:L, reg c65:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r103:V, reg c68:L, reg r104:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r105:V, reg c71:L, reg r106:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r107:V, reg c74:L, reg r108:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r109:V, reg c77:L, reg r110:V, reg c78:cls, reg r111:V, reg namc6:*, reg namc7:V, reg match:cls, reg r112:V, reg is_na:cls, reg r113:V, reg r114:V, reg any3:cls, reg r115:V, reg c79:L, reg c80:V, reg c82:L, reg warning3:cls, reg r116:V, reg npar4:*, reg npar5:V, reg r118:V, reg c83:L, reg c85:V, reg method16:*, reg method17:V, reg r119:V, reg c86:L, reg c87:V, reg c89:L, reg c91:V, reg isTRUE:cls, reg con14:*, reg con15:V, reg c92:L, reg con17:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r120:V, reg p8:p(V +), reg r122:V, reg c93:L, reg c94:V, reg c96:L, reg warning4:cls, reg r123:V, reg npar6:*, reg npar7:V, reg r125:V, reg c97:L, reg c99:V, reg method18:*, reg method19:V, reg r126:V, reg c100:L, reg c101:V, reg c103:L, reg stop1:cls, reg r127:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r129:V, reg r130:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r131:V, reg r132:V, reg lower3:*, reg lower4:V, reg npar8:*, reg npar9:V, reg rep_len:cls, reg r133:V, reg as_double:cls, reg r134:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r135:V, reg r136:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r137:V, reg r138:V, reg upper3:*, reg upper4:V, reg npar10:*, reg npar11:V, reg rep_len1:cls, reg r139:V, reg as_double1:cls, reg r140:V, reg method20:*, reg method21:V, reg r141:V, reg c104:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r142:V, reg r143:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r144:V, reg r145:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r146:V, reg r147:V, reg upper5:*, reg upper6:V, reg lower5:*, reg lower6:V, reg c105:cls, reg r148:V, reg is_finite:cls, reg r149:V, reg r150:V, reg any4:cls, reg r151:V, reg c106:L, reg stop2:cls, reg r152:V, reg optimize:cls, reg r154:cls, reg p9:p(V +), reg lower7:*, reg lower8:V, reg p10:p(V +), reg upper7:*, reg upper8:V, reg p11:p(V +), reg con18:*, reg con19:V, reg c107:L, reg con21:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r158:V, reg p12:p(V +), reg r160:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r161:V, reg r162:V, reg c108:cls, reg r163:V, reg l15:*, reg names2:cls, reg r164:V, reg c109:L, reg r167:V, reg l17:*, reg r168:V, reg dr22:V, reg dc11:L, reg dx22:V, reg r170:V, reg l19:*, reg dx23:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r177:V, reg r178:V, reg l22:*, reg r179:V, reg r180:V, reg r181:V, reg res:*, reg res1:V, reg names3:cls, reg r182:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r191:V, reg r192:V, reg l25:*, reg r193:V, reg r194:V, reg r195:V, reg r196:V, reg c110:cls, reg r197:V, reg r198:V, reg ___1:cls, reg r199:V, reg names__:cls, reg r200:V, reg res2:*, reg res3:V, reg c111:L, reg res5:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r201:V, reg con22:*, reg con23:V, reg c112:L, reg dx27:V, reg con25:V, reg dr26:V, reg dc13:L, reg dx29:V, reg dx30:V, reg dx31:V, reg r202:V, reg r203:V, reg l26:*, reg c113:L, reg r205:V, reg l28:*, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg r208:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r209:V, reg r210:V, reg res6:*, reg res7:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r211:V, reg r212:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r213:V, reg r214:V, reg c114:cls, reg r215:V, reg list2:cls, reg r216:V, reg c115:cls, reg r217:V, reg r218:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r219:V, reg C_optim:*, reg C_optim1:V, reg par3:*, reg par4:V, reg fn1:*, reg fn2:V, reg gr3:*, reg gr4:V, reg method22:*, reg method23:V, reg con26:*, reg con27:V, reg lower9:*, reg lower10:V, reg upper9:*, reg upper10:V, reg _External2:cls, reg r220:V, reg hessian1:*, reg hessian2:V, reg c116:L, reg sym34:cls, reg base34:cls, reg guard34:L, reg r221:V, reg r222:V, reg C_optimhess:*, reg C_optimhess1:V, reg res8:*, reg res9:V, reg c117:L, reg res11:V, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg r223:V, reg fn3:*, reg fn4:V, reg gr5:*, reg gr6:V, reg con28:*, reg con29:V, reg _External3:cls, reg r224:V, reg l29:*, reg c118:L, reg r226:V, reg l31:*, reg dr32:V, reg dc16:L, reg dx36:V, reg r228:V, reg dx37:V, reg r229:V, reg res12:*, reg res13:V |
    mkenv;
    st par = par;
    st fn = fn;
    gr_isMissing = missing.0(gr);
    if gr_isMissing then L0(NULL) else L0(gr);
  L0(gr_orDefault):
    st gr = gr_orDefault;
    st `...` = ddd;
    method_isMissing = missing.0(method);
    if method_isMissing then L1() else L2(method);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("Nelder-Mead", "BFGS", "CG", "L-BFGS-B", "SANN", "Brent");
      goto L0(r2);
    L2():
      r = dyn base("Nelder-Mead", "BFGS", "CG", "L-BFGS-B", "SANN", "Brent");
      goto L0(r);
    };
    goto L2(p);
  L2(method_orDefault):
    st method = method_orDefault;
    lower_isMissing = missing.0(lower);
    if lower_isMissing then L3() else L4(lower);
  L3():
    p1 = prom<V +>{
      return -Infinity;
    };
    goto L4(p1);
  L4(lower_orDefault):
    st lower = lower_orDefault;
    upper_isMissing = missing.0(upper);
    if upper_isMissing then L5(+Infinity) else L5(upper);
  L5(upper_orDefault):
    st upper = upper_orDefault;
    control_isMissing = missing.0(control);
    if control_isMissing then L6() else L7(control);
  L6():
    p2 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      list = ldf list in base;
      r7 = dyn list();
      goto L0(r7);
    L2():
      r5 = dyn base1();
      goto L0(r5);
    };
    goto L7(p2);
  L7(control_orDefault):
    st control = control_orDefault;
    hessian_isMissing = missing.0(hessian);
    if hessian_isMissing then L8(FALSE) else L8(hessian);
  L8(hessian_orDefault):
    st hessian = hessian_orDefault;
    r9 = clos inner3817890781;
    st fn1 = r9;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L77() else L78();
  L9(r11):
    r12 = `!`(r11);
    c2 = `as.logical`(r12);
    if c2 then L80() else L10();
  L77():
    gr1 = ld gr;
    check L79() else D0();
  L78():
    r10 = dyn base2(<sym gr>);
    goto L9(r10);
  D0():
    deopt 4 [gr1];
  L10():
    goto L11(NULL);
  L11(r14):
    st gr1 = r14;
    match_arg = ldf `match.arg`;
    check L82() else D1();
  L79():
    gr2 = force? gr1;
    checkMissing(gr2);
    c1 = `==`(gr2, NULL);
    goto L9(c1);
  L80():
    r13 = clos inner3817890781;
    goto L11(r13);
  D1():
    deopt 14 [];
  L82():
    p3 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r16 = dyn match_arg(p3);
    check L83() else D2();
  D2():
    deopt 16 [r16];
  L83():
    st method = r16;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L84() else L85();
  L12(r18):
    c3 = `as.logical`(r18);
    if c3 then L13(c3) else L88();
  L84():
    lower1 = ld lower;
    check L86() else D3();
  L85():
    r17 = dyn base3(<lang `>`(lower, `-`(+Infinity))>);
    goto L12(r17);
  D3():
    deopt 20 [lower1];
  L13(c4):
    c12 = `as.logical`(c4);
    if c12 then L94() else L15(c12);
  L86():
    lower2 = force? lower1;
    checkMissing(lower2);
    r19 = `>`(lower2, -Infinity);
    any = ldf any in base;
    r20 = dyn any(r19);
    check L87() else D4();
  L88():
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L89() else L90();
  D4():
    deopt 25 [r20];
  L14(c8, r22):
    c9 = `as.logical`(r22);
    c10 = `||`(c8, c9);
    goto L13(c10);
  L15(c14):
    c25 = `as.logical`(c14);
    if c25 then L103() else L18();
  L87():
    goto L12(r20);
  L89():
    upper1 = ld upper;
    check L91() else D5();
  L90():
    r21 = dyn base4(<lang `<`(upper, +Infinity)>);
    goto L14(c3, r21);
  L94():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L95() else L96();
  D5():
    deopt 28 [c3, upper1];
  L16(c17, r26):
    r32 = `!`(r26);
    c22 = `as.logical`(r32);
    c23 = `&&`(c17, c22);
    goto L15(c23);
  L18():
    goto L19();
  L19():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L107() else L108();
  L91():
    upper2 = force? upper1;
    checkMissing(upper2);
    r23 = `<`(upper2, +Infinity);
    any1 = ldf any in base;
    r24 = dyn any1(r23);
    check L92() else D6();
  L95():
    method3 = ld method;
    check L97() else D7();
  L96():
    r25 = dyn base5(<lang `==`(method, c("L-BFGS-B", "Brent"))>);
    goto L16(c12, r25);
  L103():
    warning = ldf warning;
    check L104() else D10();
  D6():
    deopt 33 [c3, r24];
  D7():
    deopt 37 [c12, method3];
  D10():
    deopt 50 [];
  L20(r36):
    st npar = r36;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L111() else L112();
  L92():
    goto L14(c3, r24);
  L97():
    method4 = force? method3;
    checkMissing(method4);
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L98() else L99();
  L104():
    r33 = dyn warning("bounds can only be used with method L-BFGS-B (or Brent)");
    check L105() else D11();
  L107():
    par1 = ld par;
    check L109() else D12();
  L108():
    r35 = dyn base7(<sym par>);
    goto L20(r35);
  D11():
    deopt 52 [r33];
  D12():
    deopt 60 [par1];
  L17(c20, method7, r28):
    r30 = `==`(method7, r28);
    any2 = ldf any in base;
    r31 = dyn any2(r30);
    check L101() else D9();
  L21(r39):
    st con = r39;
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L129() else L130();
  L98():
    c21 = ldf c in base;
    r29 = dyn c21("L-BFGS-B", "Brent");
    check L100() else D8();
  L99():
    r27 = dyn base6("L-BFGS-B", "Brent");
    goto L17(c12, method4, r27);
  L105():
    st method = "L-BFGS-B";
    goto L19();
  L109():
    par2 = force? par1;
    checkMissing(par2);
    length = ldf length in base;
    r37 = dyn length(par2);
    check L110() else D13();
  L111():
    sym9 = ldf `rep.int`;
    base9 = ldf `rep.int` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L113() else L114();
  L112():
    r38 = dyn base8[trace, fnscale, parscale, ndeps, maxit, abstol, reltol, alpha, beta, gamma, REPORT, `warn.1d.NelderMead`, type, lmm, factr, pgtol, tmax, temp](0.0, 1.0, <lang rep.int(1.0, npar)>, <lang rep.int(0.001, npar)>, 100, <lang `-`(+Infinity)>, <lang sqrt(`$`(.Machine, double.eps))>, 1.0, 0.5, 2.0, 10.0, TRUE, 1.0, 5.0, 1.0E7, 0.0, 10.0, 10.0);
    goto L21(r38);
  D8():
    deopt 43 [c12, method4, r29];
  D9():
    deopt 46 [c20, r31];
  D13():
    deopt 63 [r37];
  L22(r41):
    sym10 = ldf `rep.int`;
    base10 = ldf `rep.int` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L117() else L118();
  L25(r52):
    st nmsC = r52;
    method8 = ld method;
    check L133() else D22();
  L100():
    goto L17(c12, method4, r29);
  L101():
    goto L16(c20, r31);
  L110():
    goto L20(r37);
  L113():
    npar = ld npar;
    check L115() else D14();
  L114():
    r40 = dyn base9(1.0, <sym npar>);
    goto L22(r40);
  L129():
    con = ld con;
    check L131() else D20();
  L130():
    r51 = dyn base12(<sym con>);
    goto L25(r51);
  D14():
    deopt 74 [npar];
  D20():
    deopt 125 [con];
  D22():
    deopt 130 [method8];
  L23(r44):
    sym11 = ldf sqrt;
    base11 = ldf sqrt in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L121() else L122();
  L115():
    npar1 = force? npar;
    checkMissing(npar1);
    rep_int = ldf `rep.int` in base;
    r42 = dyn rep_int(1.0, npar1);
    check L116() else D15();
  L117():
    npar2 = ld npar;
    check L119() else D16();
  L118():
    r43 = dyn base10(0.001, <sym npar>);
    goto L23(r43);
  L131():
    con1 = force? con;
    checkMissing(con1);
    names = ldf names in base;
    r53 = dyn names(con1);
    check L132() else D21();
  L133():
    method9 = force? method8;
    checkMissing(method9);
    r54 = `==`(method9, "Nelder-Mead");
    c27 = `as.logical`(r54);
    if c27 then L134() else L26();
  D15():
    deopt 77 [r42];
  D16():
    deopt 82 [npar2];
  D21():
    deopt 128 [r53];
  L24(r47):
    list1 = ldf list in base;
    r50 = dyn list1(0.0, 1.0, r41, r44, 100, -Infinity, r47, 1.0, 0.5, 2.0, 10.0, TRUE, 1.0, 5.0, 1.0E7, 0.0, 10.0, 10.0);
    check L128() else D19();
  L26():
    goto L27();
  L27():
    method10 = ld method;
    check L140() else D23();
  L116():
    goto L22(r42);
  L119():
    npar3 = force? npar2;
    checkMissing(npar3);
    rep_int1 = ldf `rep.int` in base;
    r45 = dyn rep_int1(0.001, npar3);
    check L120() else D17();
  L121():
    _Machine = ld `.Machine`;
    check L123() else D18();
  L122():
    r46 = dyn base11(<lang `$`(.Machine, double.eps)>);
    goto L24(r46);
  L132():
    goto L25(r53);
  L134():
    l = ld con;
    c28 = `is.object`(l);
    if c28 then L136() else L137(500.0, l);
  D17():
    deopt 85 [r45];
  D18():
    deopt 93 [_Machine];
  D19():
    deopt 121 [r50];
  D23():
    deopt 141 [method10];
  L120():
    goto L23(r45);
  L123():
    _Machine1 = force? _Machine;
    checkMissing(_Machine1);
    c26 = `is.object`(_Machine1);
    if c26 then L125() else L126(_Machine1);
  L128():
    goto L21(r50);
  L135(r58, dx3):
    st con = dx3;
    goto L27();
  L136():
    dr2 = tryDispatchBuiltin.0("$<-", l, 500.0);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L138() else L137(500.0, dr2);
  L137(r56, l2):
    r59 = `$<-`(l2, <sym maxit>, 500.0);
    goto L135(r56, r59);
  L140():
    method11 = force? method10;
    checkMissing(method11);
    r61 = `==`(method11, "SANN");
    c29 = `as.logical`(r61);
    if c29 then L141() else L28();
  L28():
    goto L29();
  L29():
    control1 = ld control;
    check L151() else D24();
  L124(dx1):
    r49 = sqrt(dx1);
    goto L24(r49);
  L125():
    dr = tryDispatchBuiltin.1("$", _Machine1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L127() else L126(dr);
  L126(_Machine3):
    r48 = `$`(_Machine3, <sym double.eps>);
    goto L124(r48);
  L138():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L135(500.0, dx2);
  L141():
    l3 = ld con;
    c30 = `is.object`(l3);
    if c30 then L143() else L144(10000.0, l3);
  D24():
    deopt 157 [control1];
  L127():
    dx = getTryDispatchBuiltinValue(dr);
    goto L124(dx);
  L142(dx5):
    st con = dx5;
    l6 = ld con;
    c31 = `is.object`(l6);
    if c31 then L147() else L148(100.0, l6);
  L143():
    dr4 = tryDispatchBuiltin.0("$<-", l3, 10000.0);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L145() else L144(10000.0, dr4);
  L144(r63, l5):
    r66 = `$<-`(l5, <sym maxit>, 10000.0);
    goto L142(r66);
  L151():
    control2 = force? control1;
    checkMissing(control2);
    l9 = ld con;
    c32 = `is.object`(l9);
    if c32 then L152() else L153(control2, l9);
  L30(dx9):
    st con = dx9;
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L159() else L160();
  L145():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L142(dx4);
  L146(r70, dx7):
    st con = dx7;
    goto L29();
  L147():
    dr6 = tryDispatchBuiltin.0("$<-", l6, 100.0);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L149() else L148(100.0, dr6);
  L148(r68, l8):
    r71 = `$<-`(l8, <sym REPORT>, 100.0);
    goto L146(r68, r71);
  L152():
    dr8 = tryDispatchBuiltin.0("[<-", l9, control2);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L154() else L153(control2, dr8);
  L153(control4, l11):
    sym13 = ldf names;
    base13 = ldf names in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L155() else L156();
  L31(control11, l14, control12, r74):
    st namc = r74;
    ___ = ldf `[<-` in base;
    r76 = dyn ___(l14, control12, r74);
    goto L30(r76);
  L32(r78):
    c34 = `as.logical`(r78);
    if c34 then L168() else L34();
  L149():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L146(100.0, dx6);
  L154():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L30(dx8);
  L155():
    control13 = ld control;
    check L157() else D25();
  L156():
    r73 = dyn base13(<sym control>);
    goto L31(control4, l11, control2, r73);
  L159():
    namc = ld namc;
    check L161() else D27();
  L160():
    r77 = dyn base14(<lang `<-`(noNms, `[`(namc, `!`(`%in%`(namc, nmsC))))>);
    goto L32(r77);
  D25():
    deopt 162 [control4, l11, control2, control13];
  D27():
    deopt 171 [namc];
  L34():
    goto L35();
  L35():
    con2 = ld con;
    check L172() else D33();
  L157():
    control14 = force? control13;
    checkMissing(control14);
    names1 = ldf names in base;
    r75 = dyn names1(control14);
    check L158() else D26();
  L161():
    namc1 = force? namc;
    checkMissing(namc1);
    c33 = `is.object`(namc1);
    if c33 then L162() else L163(namc1);
  L168():
    warning1 = ldf warning;
    check L169() else D31();
  D26():
    deopt 165 [control4, l11, control2, r75];
  D31():
    deopt 184 [];
  D33():
    deopt 190 [con2];
  L33(dx11):
    st noNms = dx11;
    length1 = ldf length in base;
    r84 = dyn length1(dx11);
    check L167() else D30();
  L158():
    goto L31(control4, l11, control2, r75);
  L162():
    dr10 = tryDispatchBuiltin.1("[", namc1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L164() else L163(dr10);
  L163(namc3):
    _in_ = ldf `%in%`;
    check L165() else D28();
  L169():
    p7 = prom<V +>{
      paste = ldf paste;
      p6 = prom<V +>{
        noNms = ld noNms;
        noNms1 = force? noNms;
        checkMissing(noNms1);
        return noNms1;
      };
      r86 = dyn paste[, collapse](p6, ", ");
      return r86;
    };
    r88 = dyn warning1("unknown names in control: ", p7);
    check L170() else D32();
  L172():
    con3 = force? con2;
    checkMissing(con3);
    c35 = `is.object`(con3);
    if c35 then L174() else L175(con3);
  D28():
    deopt 174 [namc3];
  D30():
    deopt 182 [r84];
  D32():
    deopt 187 [r88];
  L164():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L33(dx10);
  L165():
    p4 = prom<V +>{
      namc4 = ld namc;
      namc5 = force? namc4;
      checkMissing(namc5);
      return namc5;
    };
    p5 = prom<V +>{
      nmsC = ld nmsC;
      nmsC1 = force? nmsC;
      checkMissing(nmsC1);
      return nmsC1;
    };
    r81 = dyn _in_(p4, p5);
    check L166() else D29();
  L167():
    goto L32(r84);
  L170():
    goto L35();
  L173(dx13):
    r91 = `<`(dx13, 0.0);
    c36 = `as.logical`(r91);
    if c36 then L177() else L36();
  L174():
    dr12 = tryDispatchBuiltin.1("$", con3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L176() else L175(dr12);
  L175(con5):
    r90 = `$`(con5, <sym trace>);
    goto L173(r90);
  D29():
    deopt 177 [namc3, r81];
  L36():
    method12 = ld method;
    check L181() else D36();
  L37():
    method14 = ld method;
    check L203() else D42();
  L166():
    r82 = `!`(r81);
    __ = ldf `[` in base;
    r83 = dyn __(namc3, r82);
    goto L33(r83);
  L176():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L173(dx12);
  L177():
    warning2 = ldf warning;
    check L178() else D34();
  D34():
    deopt 196 [];
  D36():
    deopt 199 [method12];
  D42():
    deopt 223 [method14];
  L178():
    r92 = dyn warning2("read the documentation for 'trace' more carefully");
    check L179() else D35();
  L181():
    method13 = force? method12;
    checkMissing(method13);
    r94 = `==`(method13, "SANN");
    c37 = `as.logical`(r94);
    if c37 then L182() else L38(c37);
  L203():
    method15 = force? method14;
    checkMissing(method15);
    r102 = `==`(method15, "L-BFGS-B");
    c63 = `as.logical`(r102);
    if c63 then L204() else L42(c63);
  D35():
    deopt 198 [r92];
  L38(c39):
    c48 = `as.logical`(c39);
    if c48 then L189() else L39(c48);
  L42(c65):
    c82 = `as.logical`(c65);
    if c82 then L219() else L47();
  L179():
    goto L37();
  L182():
    con6 = ld con;
    check L183() else D37();
  L204():
    sym16 = ldf any;
    base16 = ldf any in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L205() else L206();
  D37():
    deopt 203 [c37, con6];
  L39(c50):
    c62 = `as.logical`(c50);
    if c62 then L199() else L41();
  L43(c68, r104):
    c79 = `as.logical`(r104);
    c80 = `&&`(c68, c79);
    goto L42(c80);
  L47():
    goto L48();
  L48():
    npar4 = ld npar;
    check L223() else D50();
  L183():
    con7 = force? con6;
    checkMissing(con7);
    c40 = `is.object`(con7);
    if c40 then L185() else L186(c37, con7);
  L189():
    sym15 = ldf `as.integer`;
    base15 = ldf `as.integer` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L190() else L191();
  L205():
    sym17 = ldf `is.na`;
    base17 = ldf `is.na` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L207() else L208();
  L206():
    r103 = dyn base16(<lang `!`(is.na(match(c("reltol", "abstol"), namc)))>);
    goto L43(c63, r103);
  L219():
    warning3 = ldf warning;
    check L220() else D48();
  D48():
    deopt 252 [];
  D50():
    deopt 257 [npar4];
  L40(c53, r97):
    r100 = `==`(r97, 0.0);
    c59 = `as.logical`(r100);
    c60 = `&&`(c53, c59);
    goto L39(c60);
  L41():
    goto L37();
  L44(c71, r106):
    r114 = `!`(r106);
    any3 = ldf any in base;
    r115 = dyn any3(r114);
    check L217() else D47();
  L184(c44, dx15):
    c45 = `as.logical`(dx15);
    c46 = `&&`(c44, c45);
    goto L38(c46);
  L185():
    dr14 = tryDispatchBuiltin.1("$", con7);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L187() else L186(c37, dr14);
  L186(c42, con9):
    r95 = `$`(con9, <sym trace>);
    goto L184(c42, r95);
  L190():
    con10 = ld con;
    check L192() else D38();
  L191():
    r96 = dyn base15(<lang `$`(con, REPORT)>);
    goto L40(c48, r96);
  L199():
    stop = ldf stop;
    check L200() else D40();
  L207():
    sym18 = ldf match;
    base18 = ldf match in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L209() else L210();
  L208():
    r105 = dyn base17(<lang match(c("reltol", "abstol"), namc)>);
    goto L44(c63, r105);
  L220():
    r116 = dyn warning3("method L-BFGS-B uses 'factr' (and 'pgtol') instead of 'reltol' and 'abstol'");
    check L221() else D49();
  L223():
    npar5 = force? npar4;
    checkMissing(npar5);
    r118 = `==`(npar5, 1.0);
    c83 = `as.logical`(r118);
    if c83 then L224() else L49(c83);
  D38():
    deopt 209 [c48, con10];
  D40():
    deopt 218 [];
  D47():
    deopt 249 [c71, r115];
  D49():
    deopt 254 [r116];
  L45(c74, r108):
    is_na = ldf `is.na` in base;
    r113 = dyn is_na(r108);
    check L216() else D46();
  L49(c85):
    c89 = `as.logical`(c85);
    if c89 then L227() else L50(c89);
  L187():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L184(c37, dx14);
  L192():
    con11 = force? con10;
    checkMissing(con11);
    c54 = `is.object`(con11);
    if c54 then L194() else L195(c48, con11);
  L200():
    r101 = dyn stop("'trace != 0' needs 'REPORT >= 1'");
    check L201() else D41();
  L209():
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L211() else L212();
  L210():
    r107 = dyn base18(<lang c("reltol", "abstol")>, <sym namc>);
    goto L45(c63, r107);
  L217():
    goto L43(c71, r115);
  L221():
    goto L48();
  L224():
    method16 = ld method;
    check L225() else D51();
  D41():
    deopt 220 [r101];
  D46():
    deopt 246 [c74, r113];
  D51():
    deopt 261 [c83, method16];
  L46(c77, r110):
    namc6 = ld namc;
    check L214() else D44();
  L50(c91):
    c96 = `as.logical`(c91);
    if c96 then L231() else L51();
  L193(c58, dx17):
    as_integer = ldf `as.integer` in base;
    r99 = dyn as_integer(dx17);
    check L197() else D39();
  L194():
    dr16 = tryDispatchBuiltin.1("$", con11);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L196() else L195(c48, dr16);
  L195(c56, con13):
    r98 = `$`(con13, <sym REPORT>);
    goto L193(c56, r98);
  L201():
    goto L37();
  L211():
    c78 = ldf c in base;
    r111 = dyn c78("reltol", "abstol");
    check L213() else D43();
  L212():
    r109 = dyn base19("reltol", "abstol");
    goto L46(c63, r109);
  L216():
    goto L44(c74, r113);
  L225():
    method17 = force? method16;
    checkMissing(method17);
    r119 = `==`(method17, "Nelder-Mead");
    c86 = `as.logical`(r119);
    c87 = `&&`(c83, c86);
    goto L49(c87);
  L227():
    isTRUE = ldf isTRUE;
    check L228() else D52();
  D39():
    deopt 213 [c58, r99];
  D43():
    deopt 238 [c63, r111];
  D44():
    deopt 239 [c77, namc6];
  D52():
    deopt 267 [c89];
  L51():
    goto L52();
  L52():
    npar6 = ld npar;
    check L235() else D56();
  L196():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L193(c48, dx16);
  L197():
    goto L40(c58, r99);
  L213():
    goto L46(c63, r111);
  L214():
    namc7 = force? namc6;
    checkMissing(namc7);
    match = ldf match in base;
    r112 = dyn match(r110, namc7, NA_INT, NULL);
    check L215() else D45();
  L228():
    p8 = prom<V +>{
      con14 = ld con;
      con15 = force? con14;
      checkMissing(con15);
      c92 = `is.object`(con15);
      if c92 then L1() else L2(con15);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("$", con15);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(con17):
      r120 = `$`(con17, <sym warn.1d.NelderMead>);
      goto L0(r120);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r122 = dyn isTRUE(p8);
    check L229() else D53();
  L231():
    warning4 = ldf warning;
    check L232() else D54();
  D45():
    deopt 244 [c77, r112];
  D53():
    deopt 269 [c89, r122];
  D54():
    deopt 272 [];
  D56():
    deopt 277 [npar6];
  L215():
    goto L45(c77, r112);
  L229():
    c93 = `as.logical`(r122);
    c94 = `&&`(c89, c93);
    goto L50(c94);
  L232():
    r123 = dyn warning4("one-dimensional optimization by Nelder-Mead is unreliable:\nuse \"Brent\" or optimize() directly");
    check L233() else D55();
  L235():
    npar7 = force? npar6;
    checkMissing(npar7);
    r125 = `>`(npar7, 1.0);
    c97 = `as.logical`(r125);
    if c97 then L236() else L53(c97);
  D55():
    deopt 274 [r123];
  L53(c99):
    c103 = `as.logical`(c99);
    if c103 then L239() else L54();
  L233():
    goto L52();
  L236():
    method18 = ld method;
    check L237() else D57();
  D57():
    deopt 281 [c97, method18];
  L54():
    goto L55();
  L55():
    sym20 = ldf `as.double`;
    base20 = ldf `as.double` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L243() else L244();
  L237():
    method19 = force? method18;
    checkMissing(method19);
    r126 = `==`(method19, "Brent");
    c100 = `as.logical`(r126);
    c101 = `&&`(c97, c100);
    goto L53(c101);
  L239():
    stop1 = ldf stop;
    check L240() else D58();
  D58():
    deopt 287 [];
  L56(r130):
    st lower = r130;
    sym22 = ldf `as.double`;
    base22 = ldf `as.double` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L251() else L252();
  L240():
    r127 = dyn stop1("method = \"Brent\" is only available for one-dimensional optimization");
    check L241() else D59();
  L243():
    sym21 = ldf rep_len;
    base21 = ldf rep_len in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L245() else L246();
  L244():
    r129 = dyn base20(<lang rep_len(lower, npar)>);
    goto L56(r129);
  D59():
    deopt 289 [r127];
  L57(r132):
    as_double = ldf `as.double` in base;
    r134 = dyn as_double(r132);
    check L250() else D63();
  L58(r136):
    st upper = r136;
    method20 = ld method;
    check L259() else D68();
  L241():
    goto L55();
  L245():
    lower3 = ld lower;
    check L247() else D60();
  L246():
    r131 = dyn base21(<sym lower>, <sym npar>);
    goto L57(r131);
  L251():
    sym23 = ldf rep_len;
    base23 = ldf rep_len in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L253() else L254();
  L252():
    r135 = dyn base22(<lang rep_len(upper, npar)>);
    goto L58(r135);
  D60():
    deopt 296 [lower3];
  D63():
    deopt 303 [r134];
  D68():
    deopt 318 [method20];
  L59(r138):
    as_double1 = ldf `as.double` in base;
    r140 = dyn as_double1(r138);
    check L258() else D67();
  L247():
    lower4 = force? lower3;
    checkMissing(lower4);
    npar8 = ld npar;
    check L248() else D61();
  L250():
    goto L56(r134);
  L253():
    upper3 = ld upper;
    check L255() else D64();
  L254():
    r137 = dyn base23(<sym upper>, <sym npar>);
    goto L59(r137);
  L259():
    method21 = force? method20;
    checkMissing(method21);
    r141 = `==`(method21, "Brent");
    c104 = `as.logical`(r141);
    if c104 then L260() else L60();
  D61():
    deopt 298 [npar8];
  D64():
    deopt 309 [upper3];
  D67():
    deopt 316 [r140];
  L60():
    sym33 = ldf `.External2`;
    base33 = ldf `.External2` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L320() else L321();
  L73(r218):
    st res = r218;
    hessian1 = ld hessian;
    check L331() else D101();
  L248():
    npar9 = force? npar8;
    checkMissing(npar9);
    rep_len = ldf rep_len in base;
    r133 = dyn rep_len(lower4, npar9);
    check L249() else D62();
  L255():
    upper4 = force? upper3;
    checkMissing(upper4);
    npar10 = ld npar;
    check L256() else D65();
  L258():
    goto L58(r140);
  L260():
    sym24 = ldf any;
    base24 = ldf any in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L261() else L262();
  D62():
    deopt 301 [r133];
  D65():
    deopt 311 [npar10];
  D101():
    deopt 437 [hessian1];
  L61(r143):
    c106 = `as.logical`(r143);
    if c106 then L272() else L64();
  L249():
    goto L57(r133);
  L256():
    npar11 = force? npar10;
    checkMissing(npar11);
    rep_len1 = ldf rep_len in base;
    r139 = dyn rep_len1(upper4, npar11);
    check L257() else D66();
  L261():
    sym25 = ldf `is.finite`;
    base25 = ldf `is.finite` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L263() else L264();
  L262():
    r142 = dyn base24(<lang `!`(is.finite(c(upper, lower)))>);
    goto L61(r142);
  L320():
    C_optim = ld C_optim;
    check L322() else D92();
  L321():
    r219 = dyn base33(<sym C_optim>, <sym par>, <sym fn1>, <sym gr1>, <sym method>, <sym con>, <sym lower>, <sym upper>);
    goto L73(r219);
  L331():
    hessian2 = force? hessian1;
    checkMissing(hessian2);
    c116 = `as.logical`(hessian2);
    if c116 then L332() else L74();
  D66():
    deopt 314 [r139];
  D92():
    deopt 418 [C_optim];
  L62(r145):
    r150 = `!`(r145);
    any4 = ldf any in base;
    r151 = dyn any4(r150);
    check L271() else D73();
  L64():
    goto L65();
  L65():
    optimize = ldf optimize;
    check L276() else D76();
  L74():
    goto L76();
  L76():
    res12 = ld res;
    check L350() else D108();
  L257():
    goto L59(r139);
  L263():
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L265() else L266();
  L264():
    r144 = dyn base25(<lang c(upper, lower)>);
    goto L62(r144);
  L272():
    stop2 = ldf stop;
    check L273() else D74();
  L322():
    C_optim1 = force? C_optim;
    checkMissing(C_optim1);
    par3 = ld par;
    check L323() else D93();
  L332():
    sym34 = ldf `.External2`;
    base34 = ldf `.External2` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L333() else L334();
  D73():
    deopt 338 [r151];
  D74():
    deopt 340 [];
  D76():
    deopt 346 [];
  D93():
    deopt 420 [par3];
  D108():
    deopt 459 [res12];
  L63(r147):
    is_finite = ldf `is.finite` in base;
    r149 = dyn is_finite(r147);
    check L270() else D72();
  L75(r222):
    l29 = ld res;
    c118 = `is.object`(l29);
    if c118 then L346() else L347(r222, l29);
  L265():
    upper5 = ld upper;
    check L267() else D69();
  L266():
    r146 = dyn base26(<sym upper>, <sym lower>);
    goto L63(r146);
  L271():
    goto L61(r151);
  L273():
    r152 = dyn stop2("'lower' and 'upper' must be finite values");
    check L274() else D75();
  L276():
    p9 = prom<V +>{
      r154 = clos inner3817890781;
      return r154;
    };
    p10 = prom<V +>{
      lower7 = ld lower;
      lower8 = force? lower7;
      checkMissing(lower8);
      return lower8;
    };
    p11 = prom<V +>{
      upper7 = ld upper;
      upper8 = force? upper7;
      checkMissing(upper8);
      return upper8;
    };
    p12 = prom<V +>{
      con18 = ld con;
      con19 = force? con18;
      checkMissing(con19);
      c107 = `is.object`(con19);
      if c107 then L1() else L2(con19);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("$", con19);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(con21):
      r158 = `$`(con21, <sym reltol>);
      goto L0(r158);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    r160 = dyn optimize[, lower, upper, tol](p9, p10, p11, p12);
    check L277() else D77();
  L323():
    par4 = force? par3;
    checkMissing(par4);
    fn1 = ld fn1;
    check L324() else D94();
  L333():
    C_optimhess = ld C_optimhess;
    check L335() else D102();
  L334():
    r221 = dyn base34(<sym C_optimhess>, <lang `$`(res, par)>, <sym fn1>, <sym gr1>, <sym con>);
    goto L75(r221);
  L350():
    res13 = force? res12;
    checkMissing(res13);
    popenv;
    return res13;
  D69():
    deopt 328 [upper5];
  D72():
    deopt 335 [r149];
  D75():
    deopt 342 [r152];
  D77():
    deopt 354 [r160];
  D94():
    deopt 422 [fn1];
  D102():
    deopt 441 [C_optimhess];
  L267():
    upper6 = force? upper5;
    checkMissing(upper6);
    lower5 = ld lower;
    check L268() else D70();
  L270():
    goto L62(r149);
  L274():
    goto L65();
  L277():
    st res = r160;
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L278() else L279();
  L324():
    fn2 = force? fn1;
    checkMissing(fn2);
    gr3 = ld gr1;
    check L325() else D95();
  L335():
    C_optimhess1 = force? C_optimhess;
    checkMissing(C_optimhess1);
    res8 = ld res;
    check L336() else D103();
  L345(r228, dx37):
    st res = dx37;
    goto L76();
  L346():
    dr32 = tryDispatchBuiltin.0("$<-", l29, r222);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L348() else L347(r222, dr32);
  L347(r226, l31):
    r229 = `$<-`(l31, <sym hessian>, r222);
    goto L345(r226, r229);
  D70():
    deopt 330 [lower5];
  D95():
    deopt 424 [gr3];
  D103():
    deopt 443 [res8];
  L66(r162):
    l15 = ld res;
    names2 = ldf names;
    check L281() else D79();
  L268():
    lower6 = force? lower5;
    checkMissing(lower6);
    c105 = ldf c in base;
    r148 = dyn c105(upper6, lower6);
    check L269() else D71();
  L278():
    c108 = ldf c in base;
    r163 = dyn c108("par", "value");
    check L280() else D78();
  L279():
    r161 = dyn base27("par", "value");
    goto L66(r161);
  L325():
    gr4 = force? gr3;
    checkMissing(gr4);
    method22 = ld method;
    check L326() else D96();
  L336():
    res9 = force? res8;
    checkMissing(res9);
    c117 = `is.object`(res9);
    if c117 then L338() else L339(res9);
  L348():
    dx36 = getTryDispatchBuiltinValue(dr32);
    goto L345(r222, dx36);
  D71():
    deopt 333 [r148];
  D78():
    deopt 361 [r163];
  D79():
    deopt 363 [r162, l15, r162];
  D96():
    deopt 426 [method22];
  L269():
    goto L63(r148);
  L280():
    goto L66(r163);
  L281():
    r164 = dyn names2(r162, NULL);
    check L282() else D80();
  L326():
    method23 = force? method22;
    checkMissing(method23);
    con26 = ld con;
    check L327() else D97();
  L337(dx35):
    fn3 = ld fn1;
    check L341() else D104();
  L338():
    dr30 = tryDispatchBuiltin.1("$", res9);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L340() else L339(dr30);
  L339(res11):
    r223 = `$`(res11, <sym par>);
    goto L337(r223);
  D80():
    deopt 365 [r162, l15, r162, r164];
  D97():
    deopt 428 [con26];
  D104():
    deopt 446 [fn3];
  L282():
    c109 = `is.object`(r164);
    if c109 then L283() else L284(r162, l15, r164);
  L327():
    con27 = force? con26;
    checkMissing(con27);
    lower9 = ld lower;
    check L328() else D98();
  L340():
    dx34 = getTryDispatchBuiltinValue(dr30);
    goto L337(dx34);
  L341():
    fn4 = force? fn3;
    checkMissing(fn4);
    gr5 = ld gr1;
    check L342() else D105();
  D98():
    deopt 430 [lower9];
  D105():
    deopt 448 [gr5];
  L67(r170, l19, dx23):
    names__ = ldf `names<-`;
    check L293() else D84();
  L283():
    dr22 = tryDispatchBuiltin.0("[<-", r164, r162);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L285() else L284(r162, l15, dr22);
  L284(r167, l17, r168):
    sym28 = ldf names;
    base28 = ldf names in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L286() else L287();
  L328():
    lower10 = force? lower9;
    checkMissing(lower10);
    upper9 = ld upper;
    check L329() else D99();
  L342():
    gr6 = force? gr5;
    checkMissing(gr6);
    con28 = ld con;
    check L343() else D106();
  D84():
    deopt 380 [r170, l19, dx23];
  D99():
    deopt 432 [upper9];
  D106():
    deopt 450 [con28];
  L68(r178, l22, r179, r180, r181):
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L290() else L291();
  L285():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L67(r162, l15, dx22);
  L286():
    res = ld res;
    check L288() else D81();
  L287():
    r177 = dyn base28(<sym res>);
    goto L68(r167, l17, r168, r162, r177);
  L293():
    r200 = dyn names__(l19, NULL, dx23);
    check L294() else D85();
  L329():
    upper10 = force? upper9;
    checkMissing(upper10);
    _External2 = ldf `.External2` in base;
    r220 = dyn _External2(C_optim1, par4, fn2, gr4, method23, con27, lower10, upper10);
    check L330() else D100();
  L343():
    con29 = force? con28;
    checkMissing(con29);
    _External3 = ldf `.External2` in base;
    r224 = dyn _External3(C_optimhess1, dx35, fn4, gr6, con29);
    check L344() else D107();
  D81():
    deopt 369 [r167, l17, r168, r162, res];
  D85():
    deopt 382 [r170, r200];
  D100():
    deopt 435 [r220];
  D107():
    deopt 453 [r224];
  L69(r192, l25, r193, r194, r195, r196):
    r198 = `==`(r195, r196);
    ___1 = ldf `[<-` in base;
    r199 = dyn ___1(r193, r194, r198);
    goto L67(r192, l25, r199);
  L288():
    res1 = force? res;
    checkMissing(res1);
    names3 = ldf names in base;
    r182 = dyn names3(res1);
    check L289() else D82();
  L290():
    c110 = ldf c in base;
    r197 = dyn c110("minimum", "objective");
    check L292() else D83();
  L291():
    r191 = dyn base29("minimum", "objective");
    goto L69(r178, l22, r179, r180, r181, r191);
  L294():
    st res = r200;
    res2 = ld res;
    check L295() else D86();
  L330():
    goto L73(r220);
  L344():
    goto L75(r224);
  D82():
    deopt 372 [r167, l17, r168, r162, r182];
  D83():
    deopt 377 [r178, l22, r179, r180, r181, r197];
  D86():
    deopt 384 [res2];
  L289():
    goto L68(r167, l17, r168, r162, r182);
  L292():
    goto L69(r178, l22, r179, r180, r181, r197);
  L295():
    res3 = force? res2;
    checkMissing(res3);
    c111 = `is.object`(res3);
    if c111 then L297() else L298(res3);
  L296(dx25):
    con22 = ld con;
    check L300() else D87();
  L297():
    dr24 = tryDispatchBuiltin.1("$", res3);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L299() else L298(dr24);
  L298(res5):
    r201 = `$`(res5, <sym value>);
    goto L296(r201);
  D87():
    deopt 386 [dx25, con22];
  L299():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L296(dx24);
  L300():
    con23 = force? con22;
    checkMissing(con23);
    c112 = `is.object`(con23);
    if c112 then L302() else L303(dx25, con23);
  L301(dx30, dx31):
    r203 = `*`(dx30, dx31);
    l26 = ld res;
    c113 = `is.object`(l26);
    if c113 then L306() else L307(r203, l26);
  L302():
    dr26 = tryDispatchBuiltin.1("$", con23);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L304() else L303(dx25, dr26);
  L303(dx27, con25):
    r202 = `$`(con25, <sym fnscale>);
    goto L301(dx27, r202);
  L304():
    dx29 = getTryDispatchBuiltinValue(dr26);
    goto L301(dx25, dx29);
  L305(dx33):
    st res = dx33;
    sym30 = ldf c;
    base30 = ldf c in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L309() else L310();
  L306():
    dr28 = tryDispatchBuiltin.0("$<-", l26, r203);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L308() else L307(r203, dr28);
  L307(r205, l28):
    r208 = `$<-`(l28, <sym value>, r203);
    goto L305(r208);
  L70(r210):
    goto L73(r210);
  L308():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L305(dx32);
  L309():
    res6 = ld res;
    check L311() else D88();
  L310():
    r209 = dyn base30(<sym res>, <lang list(counts=c(function=NA_LGL, gradient=NA_LGL), convergence=0, message=NULL)>);
    goto L70(r209);
  D88():
    deopt 395 [res6];
  L311():
    res7 = force? res6;
    checkMissing(res7);
    sym31 = ldf list;
    base31 = ldf list in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L312() else L313();
  L71(r212):
    c115 = ldf c in base;
    r217 = dyn c115(res7, r212);
    check L318() else D91();
  L312():
    sym32 = ldf c;
    base32 = ldf c in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L314() else L315();
  L313():
    r211 = dyn base31[counts, convergence, message](<lang c(function=NA_LGL, gradient=NA_LGL)>, 0, NULL);
    goto L71(r211);
  D91():
    deopt 415 [r217];
  L72(r214):
    list2 = ldf list in base;
    r216 = dyn list2(r214, 0, NULL);
    check L317() else D90();
  L314():
    c114 = ldf c in base;
    r215 = dyn c114(NA_LGL, NA_LGL);
    check L316() else D89();
  L315():
    r213 = dyn base32[function, gradient](NA_LGL, NA_LGL);
    goto L72(r213);
  L318():
    goto L70(r217);
  D89():
    deopt 406 [r215];
  D90():
    deopt 413 [r216];
  L316():
    goto L72(r215);
  L317():
    goto L71(r216);
  }
}
fun inner3817890781(par) {
  (reg par:*) -+> V { var par:*, reg fn:cls, reg par1:*, reg par2:V, reg p:p(V +), reg ddd:*, reg r1:V |
    mkenv;
    st par = par;
    fn = ldf fn;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      par1 = ld par;
      par2 = force? par1;
      checkMissing(par2);
      return par2;
    };
    ddd = ld `...`;
    r1 = dyn fn[, `...`](p, ddd);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}