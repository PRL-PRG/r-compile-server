fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2530300614;
    st constrOptim = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2530300614(theta, f, grad, ui, ci, mu, control, method, `outer.iterations`, `outer.eps`, `...`, hessian) {
  (reg theta:*, reg f:*, reg grad:*, reg ui:*, reg ci:*, reg mu:*, reg control:*, reg method:*, reg outer_iterations:*, reg outer_eps:*, reg ddd:dots, reg hessian:*) -+> V { var theta:*, var f:*, var grad:*, var ui:*, var ci:*, var mu:*, reg mu_isMissing:L, reg mu_orDefault:*, var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var method:*, reg method_isMissing:L, reg method_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg grad1:*, reg grad2:V, reg c:V, reg c1:L, reg p1:p(V +), var `outer.iterations`:*, reg outer_iterations_isMissing:L, reg outer_iterations_orDefault:*, var `outer.eps`:*, reg outer_eps_isMissing:L, reg outer_eps_orDefault:*, var `...`:dots?, var hessian:*, reg hessian_isMissing:L, reg hessian_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg control1:*, reg control2:V, reg c2:L, reg control4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg c3:V, reg r10:V, reg c4:L, reg c6:V, reg control5:*, reg control6:V, reg c7:L, reg c9:L, reg control8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c11:L, reg dx3:V, reg r11:V, reg r12:V, reg c12:L, reg c13:V, reg c15:L, reg mu1:*, reg mu2:V, reg r13:V, reg r15:cls, reg r16:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg ui1:*, reg ui2:V, reg theta1:*, reg theta2:V, reg ___:cls, reg r19:V, reg ci1:*, reg ci2:V, reg r20:V, reg r21:V, reg any:cls, reg r22:V, reg c16:L, reg stop:cls, reg r23:V, reg f1:cls, reg theta3:*, reg theta4:V, reg p2:p(V +), reg ddd1:dots?, reg r26:V, reg R:cls, reg theta5:*, reg theta6:V, reg p3:p(V +), reg theta7:*, reg theta8:V, reg p4:p(V +), reg ddd2:dots?, reg r29:V, reg r30:cls, reg method1:*, reg method2:V, reg r31:V, reg c17:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg missing:cls, reg r34:V, reg c18:L, reg r35:V, reg grad3:*, reg grad4:V, reg r36:V, reg r37:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg mu3:*, reg mu4:V, reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg outer_iterations1:*, reg outer_iterations2:V, reg r43:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c19:L, reg x:V, reg obj:*, reg obj1:V, reg r44:*, reg r45:V, reg theta9:*, reg theta10:V, reg optim:cls, reg theta_old:*, reg theta_old1:V, reg p5:p(V +), reg fun:*, reg fun1:V, reg p6:p(V +), reg gradient:*, reg gradient1:V, reg p7:p(V +), reg control9:*, reg control10:V, reg p8:p(V +), reg method3:*, reg method4:V, reg p9:p(V +), reg hessian1:*, reg hessian2:V, reg p10:p(V +), reg ddd3:dots?, reg r52:V, reg a:*, reg a1:V, reg c20:L, reg i6:I, reg a3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i8:I, reg dx5:V, reg r53:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg i11:I, reg r55:V, reg r56:*, reg r57:V, reg is_finite:cls, reg r58:V, reg c21:L, reg i13:I, reg c23:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r59:V, reg i16:I, reg c26:L, reg r60:V, reg r_old:*, reg r_old1:V, reg is_finite1:cls, reg r61:V, reg c27:L, reg c28:V, reg c30:L, reg i19:I, reg c32:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r62:V, reg i22:I, reg c35:L, reg r63:V, reg r64:*, reg r65:V, reg r_old2:*, reg r_old3:V, reg r66:V, reg abs:cls, reg r67:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r72:V, reg i25:I, reg c38:L, reg r73:V, reg r74:R, reg r75:V, reg r76:*, reg r77:V, reg abs1:cls, reg r78:V, reg r79:V, reg outer_eps1:*, reg outer_eps2:V, reg r80:V, reg r81:V, reg c39:L, reg c40:V, reg c42:L, reg a4:*, reg a5:V, reg c43:L, reg i33:I, reg a7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i35:I, reg dx7:V, reg r83:V, reg totCounts:*, reg totCounts1:V, reg a8:*, reg a9:V, reg c44:L, reg i37:I, reg totCounts3:V, reg a11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i39:I, reg totCounts5:V, reg dx9:V, reg r84:V, reg r85:V, reg f2:cls, reg theta11:*, reg theta12:V, reg p11:p(V +), reg ddd4:dots?, reg r87:V, reg s_mu:*, reg s_mu1:V, reg obj2:*, reg obj3:V, reg r88:V, reg s_mu2:*, reg s_mu3:V, reg obj_old:*, reg obj_old1:V, reg r89:V, reg r90:V, reg c45:L, reg i44:*, reg i45:V, reg outer_iterations3:*, reg outer_iterations4:V, reg r92:V, reg c46:L, reg l1:*, reg c47:L, reg r94:R, reg l3:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r97:V, reg gettext:cls, reg r98:V, reg l4:*, reg c48:L, reg r100:V, reg l6:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r102:V, reg dx13:V, reg r103:V, reg mu5:*, reg mu6:V, reg r105:V, reg c49:L, reg c51:V, reg obj4:*, reg obj5:V, reg obj_old2:*, reg obj_old3:V, reg r106:V, reg c52:L, reg c53:V, reg c55:L, reg l7:*, reg c56:L, reg r108:R, reg l9:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r111:V, reg gettextf:cls, reg i46:*, reg i47:V, reg p12:p(V +), reg r113:V, reg l10:*, reg c57:L, reg r115:V, reg l12:*, reg dr16:V, reg dc8:L, reg dx16:V, reg r117:V, reg dx17:V, reg r118:V, reg mu7:*, reg mu8:V, reg r120:V, reg c58:L, reg c60:V, reg obj6:*, reg obj7:V, reg obj_old4:*, reg obj_old5:V, reg r121:V, reg c61:L, reg c62:V, reg c64:L, reg l13:*, reg c65:L, reg r123:R, reg l15:*, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r126:V, reg gettextf1:cls, reg i48:*, reg i49:V, reg p13:p(V +), reg r128:V, reg l16:*, reg c66:L, reg r130:V, reg l18:*, reg dr20:V, reg dc10:L, reg dx20:V, reg r132:V, reg dx21:V, reg r133:V, reg i50:*, reg i51:V, reg l19:*, reg c67:L, reg i53:V, reg l21:*, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r135:V, reg totCounts6:*, reg totCounts7:V, reg l22:*, reg c68:L, reg totCounts9:V, reg l24:*, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r136:V, reg a12:*, reg a13:V, reg c69:L, reg a15:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg r137:V, reg l25:*, reg c70:L, reg dx29:V, reg l27:*, reg dr28:V, reg dc14:L, reg dx31:V, reg dx33:V, reg r138:V, reg f3:cls, reg a16:*, reg a17:V, reg c71:L, reg a19:V, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg r139:V, reg p14:p(V +), reg ddd5:dots?, reg r141:V, reg l28:*, reg c72:L, reg r143:V, reg l30:*, reg dr32:V, reg dc16:L, reg dx36:V, reg dx37:V, reg r146:V, reg a20:*, reg a21:V, reg c73:L, reg a23:V, reg dr34:V, reg dc17:L, reg dx38:V, reg dx39:V, reg r147:V, reg a24:*, reg a25:V, reg c74:L, reg dx41:V, reg a27:V, reg dr36:V, reg dc18:L, reg dx43:V, reg dx44:V, reg dx45:V, reg r148:V, reg r149:V, reg l31:*, reg c75:L, reg r151:V, reg l33:*, reg dr38:V, reg dc19:L, reg dx46:V, reg dx47:V, reg r154:V, reg a28:*, reg a29:V |
    mkenv;
    st theta = theta;
    st f = f;
    st grad = grad;
    st ui = ui;
    st ci = ci;
    mu_isMissing = missing.0(mu);
    if mu_isMissing then L0(1.0E-4) else L0(mu);
  L0(mu_orDefault):
    st mu = mu_orDefault;
    control_isMissing = missing.0(control);
    if control_isMissing then L1() else L2(control);
  L1():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L2(p);
  L2(control_orDefault):
    st control = control_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L3() else L4(method);
  L3():
    p1 = prom<V +>{
      sym1 = ldf `is.null`;
      base1 = ldf `is.null` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r5):
      c1 = `as.logical`(r5);
      if c1 then L4() else L1();
    L2():
      grad1 = ld grad;
      grad2 = force? grad1;
      checkMissing(grad2);
      c = `==`(grad2, NULL);
      goto L0(c);
    L3():
      r4 = dyn base1(<sym grad>);
      goto L0(r4);
    L1():
      return "BFGS";
    L4():
      return "Nelder-Mead";
    };
    goto L4(p1);
  L4(method_orDefault):
    st method = method_orDefault;
    outer_iterations_isMissing = missing.0(outer_iterations);
    if outer_iterations_isMissing then L5(100.0) else L5(outer_iterations);
  L5(outer_iterations_orDefault):
    st `outer.iterations` = outer_iterations_orDefault;
    outer_eps_isMissing = missing.0(outer_eps);
    if outer_eps_isMissing then L6(1.0E-5) else L6(outer_eps);
  L6(outer_eps_orDefault):
    st `outer.eps` = outer_eps_orDefault;
    st `...` = ddd;
    hessian_isMissing = missing.0(hessian);
    if hessian_isMissing then L7(FALSE) else L7(hessian);
  L7(hessian_orDefault):
    st hessian = hessian_orDefault;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  L8(r8):
    r10 = `!`(r8);
    c4 = `as.logical`(r10);
    if c4 then L50() else L9(c4);
  L43():
    control1 = ld control;
    check L45() else D0();
  L44():
    r7 = dyn base2(<lang `$`(control, fnscale)>);
    goto L8(r7);
  D0():
    deopt 1 [control1];
  L9(c6):
    c15 = `as.logical`(c6);
    if c15 then L57() else L10();
  L45():
    control2 = force? control1;
    checkMissing(control2);
    c2 = `is.object`(control2);
    if c2 then L47() else L48(control2);
  L50():
    control5 = ld control;
    check L51() else D1();
  D1():
    deopt 6 [c4, control5];
  L10():
    goto L11();
  L11():
    r15 = clos inner1589173713;
    st R = r15;
    r16 = clos inner1589173713;
    st dR = r16;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L60() else L61();
  L46(dx1):
    c3 = `==`(dx1, NULL);
    goto L8(c3);
  L47():
    dr = tryDispatchBuiltin.1("$", control2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L49() else L48(dr);
  L48(control4):
    r9 = `$`(control4, <sym fnscale>);
    goto L46(r9);
  L51():
    control6 = force? control5;
    checkMissing(control6);
    c7 = `is.object`(control6);
    if c7 then L53() else L54(c4, control6);
  L57():
    mu1 = ld mu;
    check L58() else D2();
  D2():
    deopt 12 [mu1];
  L12(r18):
    c16 = `as.logical`(r18);
    if c16 then L67() else L13();
  L49():
    dx = getTryDispatchBuiltinValue(dr);
    goto L46(dx);
  L52(c11, dx3):
    r12 = `<`(dx3, 0.0);
    c12 = `as.logical`(r12);
    c13 = `&&`(c11, c12);
    goto L9(c13);
  L53():
    dr2 = tryDispatchBuiltin.1("$", control6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L55() else L54(c4, dr2);
  L54(c9, control8):
    r11 = `$`(control8, <sym fnscale>);
    goto L52(c9, r11);
  L58():
    mu2 = force? mu1;
    checkMissing(mu2);
    r13 = `-`(<missing>, mu2);
    st mu = r13;
    goto L11();
  L60():
    ui1 = ld ui;
    check L62() else D3();
  L61():
    r17 = dyn base3(<lang `<=`(`-`(`%*%`(ui, theta), ci), 0.0)>);
    goto L12(r17);
  D3():
    deopt 27 [ui1];
  L13():
    goto L14();
  L14():
    f1 = ldf f;
    check L71() else D10();
  L55():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L52(c4, dx2);
  L62():
    ui2 = force? ui1;
    checkMissing(ui2);
    theta1 = ld theta;
    check L63() else D4();
  L67():
    stop = ldf stop;
    check L68() else D8();
  D4():
    deopt 29 [theta1];
  D8():
    deopt 40 [];
  D10():
    deopt 46 [];
  L63():
    theta2 = force? theta1;
    checkMissing(theta2);
    ___ = ldf `%*%` in base;
    r19 = dyn ___(ui2, theta2);
    check L64() else D5();
  L68():
    r23 = dyn stop("initial value is not in the interior of the feasible region");
    check L69() else D9();
  L71():
    p2 = prom<V +>{
      theta3 = ld theta;
      theta4 = force? theta3;
      checkMissing(theta4);
      return theta4;
    };
    ddd1 = ld `...`;
    r26 = dyn f1[, `...`](p2, ddd1);
    check L72() else D11();
  D5():
    deopt 32 [r19];
  D9():
    deopt 42 [r23];
  D11():
    deopt 49 [r26];
  L64():
    ci1 = ld ci;
    check L65() else D6();
  L69():
    goto L14();
  L72():
    st obj = r26;
    R = ldf R;
    check L73() else D12();
  D6():
    deopt 32 [r19, ci1];
  D12():
    deopt 52 [];
  L65():
    ci2 = force? ci1;
    checkMissing(ci2);
    r20 = `-`(r19, ci2);
    r21 = `<=`(r20, 0.0);
    any = ldf any in base;
    r22 = dyn any(r21);
    check L66() else D7();
  L73():
    p3 = prom<V +>{
      theta5 = ld theta;
      theta6 = force? theta5;
      checkMissing(theta6);
      return theta6;
    };
    p4 = prom<V +>{
      theta7 = ld theta;
      theta8 = force? theta7;
      checkMissing(theta8);
      return theta8;
    };
    ddd2 = ld `...`;
    r29 = dyn R[, , `...`](p3, p4, ddd2);
    check L74() else D13();
  D7():
    deopt 38 [r22];
  D13():
    deopt 56 [r29];
  L66():
    goto L12(r22);
  L74():
    st r = r29;
    r30 = clos inner3391087164;
    st fun = r30;
    method1 = ld method;
    check L75() else D14();
  D14():
    deopt 61 [method1];
  L75():
    method2 = force? method1;
    checkMissing(method2);
    r31 = `==`(method2, "SANN");
    c17 = `as.logical`(r31);
    if c17 then L76() else L15();
  L15():
    r37 = clos inner3391087164;
    goto L19(r37);
  L19(r36):
    st gradient = r36;
    st totCounts = 0.0;
    sym5 = ldf sign;
    base5 = ldf sign in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L83() else L84();
  L76():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L77() else L78();
  L16(r33):
    c18 = `as.logical`(r33);
    if c18 then L79() else L17();
  L20(r39):
    st `s.mu` = r39;
    sym6 = ldf seq_len;
    base6 = ldf seq_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L86() else L87();
  L77():
    missing = ldf missing in base;
    r34 = dyn missing(<sym grad>);
    goto L16(r34);
  L78():
    r32 = dyn base4(<sym grad>);
    goto L16(r32);
  L83():
    mu3 = ld mu;
    check L85() else D16();
  L84():
    r38 = dyn base5(<sym mu>);
    goto L20(r38);
  D16():
    deopt 79 [mu3];
  L17():
    grad3 = ld grad;
    check L81() else D15();
  L18(r35):
    goto L19(r35);
  L21(r42):
    s = toForSeq(r42);
    l = length(s);
    i = 0;
    goto L22(i);
  L79():
    goto L18(NULL);
  L85():
    mu4 = force? mu3;
    checkMissing(mu4);
    r40 = sign(mu4);
    goto L20(r40);
  L86():
    outer_iterations1 = ld `outer.iterations`;
    check L88() else D17();
  L87():
    r41 = dyn base6(<sym outer.iterations>);
    goto L21(r41);
  D15():
    deopt 70 [grad3];
  D17():
    deopt 84 [outer_iterations1];
  L22(i1):
    i2 = `+`.1(i1, 1);
    c19 = `<`.1(l, i2);
    if c19 then L89() else L34();
  L81():
    grad4 = force? grad3;
    checkMissing(grad4);
    goto L18(grad4);
  L88():
    outer_iterations2 = force? outer_iterations1;
    checkMissing(outer_iterations2);
    r43 = seq_len(outer_iterations2);
    goto L21(r43);
  L30():
    i44 = ld i;
    check L145() else D43();
  L34():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    obj = ld obj;
    check L90() else D18();
  L89():
    goto L30();
  D18():
    deopt 87 [i2, obj];
  D43():
    deopt 181 [i44];
  L90():
    obj1 = force? obj;
    checkMissing(obj1);
    st `obj.old` = obj1;
    r44 = ld r;
    check L91() else D19();
  L145():
    i45 = force? i44;
    checkMissing(i45);
    outer_iterations3 = ld `outer.iterations`;
    check L146() else D44();
  D19():
    deopt 90 [i2, r44];
  D44():
    deopt 182 [i45, outer_iterations3];
  L91():
    r45 = force? r44;
    checkMissing(r45);
    st `r.old` = r45;
    theta9 = ld theta;
    check L92() else D20();
  L146():
    outer_iterations4 = force? outer_iterations3;
    checkMissing(outer_iterations4);
    r92 = `==`(i45, outer_iterations4);
    c46 = `as.logical`(r92);
    if c46 then L147() else L35();
  D20():
    deopt 93 [i2, theta9];
  L35():
    goto L36();
  L36():
    mu5 = ld mu;
    check L159() else D47();
  L92():
    theta10 = force? theta9;
    checkMissing(theta10);
    st `theta.old` = theta10;
    optim = ldf optim;
    check L93() else D21();
  L147():
    l1 = ld a;
    c47 = `is.object`(l1);
    if c47 then L149() else L150(7.0, l1);
  D21():
    deopt 97 [i2];
  D47():
    deopt 199 [mu5];
  L93():
    p5 = prom<V +>{
      theta_old = ld `theta.old`;
      theta_old1 = force? theta_old;
      checkMissing(theta_old1);
      return theta_old1;
    };
    p6 = prom<V +>{
      fun = ld fun;
      fun1 = force? fun;
      checkMissing(fun1);
      return fun1;
    };
    p7 = prom<V +>{
      gradient = ld gradient;
      gradient1 = force? gradient;
      checkMissing(gradient1);
      return gradient1;
    };
    p8 = prom<V +>{
      control9 = ld control;
      control10 = force? control9;
      checkMissing(control10);
      return control10;
    };
    p9 = prom<V +>{
      method3 = ld method;
      method4 = force? method3;
      checkMissing(method4);
      return method4;
    };
    p10 = prom<V +>{
      hessian1 = ld hessian;
      hessian2 = force? hessian1;
      checkMissing(hessian2);
      return hessian2;
    };
    ddd3 = ld `...`;
    r52 = dyn optim[, , , control, method, hessian, `...`](p5, p6, p7, p8, p9, p10, ddd3);
    check L94() else D22();
  L148(dx11):
    st a = dx11;
    gettext = ldf gettext;
    check L152() else D45();
  L149():
    dr10 = tryDispatchBuiltin.0("$<-", l1, 7.0);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L151() else L150(7.0, dr10);
  L150(r94, l3):
    r97 = `$<-`(l3, <sym convergence>, 7.0);
    goto L148(r97);
  L159():
    mu6 = force? mu5;
    checkMissing(mu6);
    r105 = `>`(mu6, 0.0);
    c49 = `as.logical`(r105);
    if c49 then L160() else L37(c49);
  D22():
    deopt 108 [i2, r52];
  D45():
    deopt 191 [];
  L37(c51):
    c55 = `as.logical`(c51);
    if c55 then L164() else L38();
  L94():
    st a = r52;
    a = ld a;
    check L95() else D23();
  L151():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L148(dx10);
  L152():
    r98 = dyn gettext("Barrier algorithm ran out of iterations and did not converge");
    check L153() else D46();
  L160():
    obj4 = ld obj;
    check L161() else D48();
  D23():
    deopt 110 [i2, a];
  D46():
    deopt 193 [r98];
  D48():
    deopt 203 [c49, obj4];
  L38():
    goto L39();
  L39():
    mu7 = ld mu;
    check L176() else D52();
  L95():
    a1 = force? a;
    checkMissing(a1);
    c20 = `is.object`(a1);
    if c20 then L97() else L98(i2, a1);
  L153():
    l4 = ld a;
    c48 = `is.object`(l4);
    if c48 then L155() else L156(r98, l4);
  L161():
    obj5 = force? obj4;
    checkMissing(obj5);
    obj_old2 = ld `obj.old`;
    check L162() else D49();
  L164():
    l7 = ld a;
    c56 = `is.object`(l7);
    if c56 then L166() else L167(11.0, l7);
  D49():
    deopt 204 [c49, obj5, obj_old2];
  D52():
    deopt 223 [mu7];
  L96(i8, dx5):
    st r = dx5;
    sym7 = ldf `is.finite`;
    base7 = ldf `is.finite` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L100() else L101();
  L97():
    dr4 = tryDispatchBuiltin.1("$", a1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L99() else L98(i2, dr4);
  L98(i6, a3):
    r53 = `$`(a3, <sym value>);
    goto L96(i6, r53);
  L154(r102, dx13):
    st a = dx13;
    goto L36();
  L155():
    dr12 = tryDispatchBuiltin.0("$<-", l4, r98);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L157() else L156(r98, dr12);
  L156(r100, l6):
    r103 = `$<-`(l6, <sym message>, r98);
    goto L154(r100, r103);
  L162():
    obj_old3 = force? obj_old2;
    checkMissing(obj_old3);
    r106 = `>`(obj5, obj_old3);
    c52 = `as.logical`(r106);
    c53 = `&&`(c49, c52);
    goto L37(c53);
  L165(dx15):
    st a = dx15;
    gettextf = ldf gettextf;
    check L169() else D50();
  L166():
    dr14 = tryDispatchBuiltin.0("$<-", l7, 11.0);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L168() else L167(11.0, dr14);
  L167(r108, l9):
    r111 = `$<-`(l9, <sym convergence>, 11.0);
    goto L165(r111);
  L176():
    mu8 = force? mu7;
    checkMissing(mu8);
    r120 = `<`(mu8, 0.0);
    c58 = `as.logical`(r120);
    if c58 then L177() else L40(c58);
  D50():
    deopt 214 [];
  L23(i11, r55):
    c21 = `as.logical`(r55);
    if c21 then L104() else L24(i11, c21);
  L40(c60):
    c64 = `as.logical`(c60);
    if c64 then L181() else L41();
  L99():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L96(i2, dx4);
  L100():
    r56 = ld r;
    check L102() else D24();
  L101():
    r54 = dyn base7(<sym r>);
    goto L23(i8, r54);
  L157():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L154(r98, dx12);
  L168():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L165(dx14);
  L169():
    p12 = prom<V +>{
      i46 = ld i;
      i47 = force? i46;
      checkMissing(i47);
      return i47;
    };
    r113 = dyn gettextf("Objective function increased at outer iteration %d", p12);
    check L170() else D51();
  L177():
    obj6 = ld obj;
    check L178() else D53();
  D24():
    deopt 116 [i8, r56];
  D51():
    deopt 217 [r113];
  D53():
    deopt 227 [c58, obj6];
  L24(i13, c23):
    c30 = `as.logical`(c23);
    if c30 then L110() else L26(i13, c30);
  L41():
    goto L42();
  L42():
    i50 = ld i;
    check L193() else D57();
  L102():
    r57 = force? r56;
    checkMissing(r57);
    is_finite = ldf `is.finite` in base;
    r58 = dyn is_finite(r57);
    check L103() else D25();
  L104():
    sym8 = ldf `is.finite`;
    base8 = ldf `is.finite` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L105() else L106();
  L170():
    l10 = ld a;
    c57 = `is.object`(l10);
    if c57 then L172() else L173(r113, l10);
  L178():
    obj7 = force? obj6;
    checkMissing(obj7);
    obj_old4 = ld `obj.old`;
    check L179() else D54();
  L181():
    l13 = ld a;
    c65 = `is.object`(l13);
    if c65 then L183() else L184(11.0, l13);
  D25():
    deopt 119 [i8, r58];
  D54():
    deopt 228 [c58, obj7, obj_old4];
  D57():
    deopt 247 [i50];
  L25(i16, c26, r60):
    c27 = `as.logical`(r60);
    c28 = `&&`(c26, c27);
    goto L24(i16, c28);
  L26(i19, c32):
    c42 = `as.logical`(c32);
    if c42 then L122() else L29();
  L103():
    goto L23(i8, r58);
  L105():
    r_old = ld `r.old`;
    check L107() else D26();
  L106():
    r59 = dyn base8(<sym r.old>);
    goto L25(i11, c21, r59);
  L110():
    sym9 = ldf abs;
    base9 = ldf abs in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L111() else L112();
  L171(r117, dx17):
    st a = dx17;
    goto L39();
  L172():
    dr16 = tryDispatchBuiltin.0("$<-", l10, r113);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L174() else L173(r113, dr16);
  L173(r115, l12):
    r118 = `$<-`(l12, <sym message>, r113);
    goto L171(r115, r118);
  L179():
    obj_old5 = force? obj_old4;
    checkMissing(obj_old5);
    r121 = `<`(obj7, obj_old5);
    c61 = `as.logical`(r121);
    c62 = `&&`(c58, c61);
    goto L40(c62);
  L182(dx19):
    st a = dx19;
    gettextf1 = ldf gettextf;
    check L186() else D55();
  L183():
    dr18 = tryDispatchBuiltin.0("$<-", l13, 11.0);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L185() else L184(11.0, dr18);
  L184(r123, l15):
    r126 = `$<-`(l15, <sym convergence>, 11.0);
    goto L182(r126);
  L193():
    i51 = force? i50;
    checkMissing(i51);
    l19 = ld a;
    c67 = `is.object`(l19);
    if c67 then L195() else L196(i51, l19);
  D26():
    deopt 122 [i11, c21, r_old];
  D55():
    deopt 238 [];
  L27(i22, c35, r63):
    sym10 = ldf abs;
    base10 = ldf abs in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L116() else L117();
  L29():
    a4 = ld a;
    check L125() else D34();
  L107():
    r_old1 = force? r_old;
    checkMissing(r_old1);
    is_finite1 = ldf `is.finite` in base;
    r61 = dyn is_finite1(r_old1);
    check L108() else D27();
  L111():
    r64 = ld r;
    check L113() else D28();
  L112():
    r62 = dyn base9(<lang `-`(r, r.old)>);
    goto L27(i13, c30, r62);
  L122():
    goto L30();
  L174():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L171(r113, dx16);
  L185():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L182(dx18);
  L186():
    p13 = prom<V +>{
      i48 = ld i;
      i49 = force? i48;
      checkMissing(i49);
      return i49;
    };
    r128 = dyn gettextf1("Objective function decreased at outer iteration %d", p13);
    check L187() else D56();
  L194(dx23):
    st a = dx23;
    totCounts6 = ld totCounts;
    check L198() else D58();
  L195():
    dr22 = tryDispatchBuiltin.0("$<-", l19, i51);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L197() else L196(i51, dr22);
  L196(i53, l21):
    r135 = `$<-`(l21, <sym outer.iterations>, i51);
    goto L194(r135);
  D27():
    deopt 125 [i11, c21, r61];
  D28():
    deopt 129 [i13, c30, r64];
  D34():
    deopt 150 [i19, a4];
  D56():
    deopt 241 [r128];
  D58():
    deopt 252 [totCounts6];
  L28(i25, c38, r73, r74, r75):
    r79 = `+`(r74, r75);
    outer_eps1 = ld `outer.eps`;
    check L120() else D33();
  L108():
    goto L25(i11, c21, r61);
  L113():
    r65 = force? r64;
    checkMissing(r65);
    r_old2 = ld `r.old`;
    check L114() else D29();
  L116():
    r76 = ld r;
    check L118() else D31();
  L117():
    r72 = dyn base10(<sym r>);
    goto L28(i22, c35, r63, 0.001, r72);
  L125():
    a5 = force? a4;
    checkMissing(a5);
    c43 = `is.object`(a5);
    if c43 then L127() else L128(i19, a5);
  L187():
    l16 = ld a;
    c66 = `is.object`(l16);
    if c66 then L189() else L190(r128, l16);
  L197():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L194(dx22);
  L198():
    totCounts7 = force? totCounts6;
    checkMissing(totCounts7);
    l22 = ld a;
    c68 = `is.object`(l22);
    if c68 then L200() else L201(totCounts7, l22);
  D29():
    deopt 130 [i13, c30, r65, r_old2];
  D31():
    deopt 137 [i22, c35, r63, 0.001, r76];
  D33():
    deopt 141 [i25, c38, r73, r79, outer_eps1];
  L114():
    r_old3 = force? r_old2;
    checkMissing(r_old3);
    r66 = `-`(r65, r_old3);
    abs = ldf abs in base;
    r67 = dyn abs(r66);
    check L115() else D30();
  L118():
    r77 = force? r76;
    checkMissing(r77);
    abs1 = ldf abs in base;
    r78 = dyn abs1(r77);
    check L119() else D32();
  L120():
    outer_eps2 = force? outer_eps1;
    checkMissing(outer_eps2);
    r80 = `*`(r79, outer_eps2);
    r81 = `<`(r73, r80);
    c39 = `as.logical`(r81);
    c40 = `&&`(c38, c39);
    goto L26(i25, c40);
  L126(i35, dx7):
    st theta = dx7;
    totCounts = ld totCounts;
    check L130() else D35();
  L127():
    dr6 = tryDispatchBuiltin.1("$", a5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L129() else L128(i19, dr6);
  L128(i33, a7):
    r83 = `$`(a7, <sym par>);
    goto L126(i33, r83);
  L188(r132, dx21):
    st a = dx21;
    goto L42();
  L189():
    dr20 = tryDispatchBuiltin.0("$<-", l16, r128);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L191() else L190(r128, dr20);
  L190(r130, l18):
    r133 = `$<-`(l18, <sym message>, r128);
    goto L188(r130, r133);
  L199(dx25):
    st a = dx25;
    a12 = ld a;
    check L203() else D59();
  L200():
    dr24 = tryDispatchBuiltin.0("$<-", l22, totCounts7);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L202() else L201(totCounts7, dr24);
  L201(totCounts9, l24):
    r136 = `$<-`(l24, <sym counts>, totCounts7);
    goto L199(r136);
  D30():
    deopt 134 [i13, c30, r67];
  D32():
    deopt 140 [i22, c35, r63, 0.001, r78];
  D35():
    deopt 154 [i35, totCounts];
  D59():
    deopt 257 [a12];
  L115():
    goto L27(i13, c30, r67);
  L119():
    goto L28(i22, c35, r63, 0.001, r78);
  L129():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L126(i19, dx6);
  L130():
    totCounts1 = force? totCounts;
    checkMissing(totCounts1);
    a8 = ld a;
    check L131() else D36();
  L191():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L188(r128, dx20);
  L202():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L199(dx24);
  L203():
    a13 = force? a12;
    checkMissing(a13);
    c69 = `is.object`(a13);
    if c69 then L205() else L206(a13);
  D36():
    deopt 155 [i35, totCounts1, a8];
  L131():
    a9 = force? a8;
    checkMissing(a9);
    c44 = `is.object`(a9);
    if c44 then L133() else L134(i35, totCounts1, a9);
  L204(dx27):
    l25 = ld a;
    c70 = `is.object`(l25);
    if c70 then L209() else L210(dx27, l25);
  L205():
    dr26 = tryDispatchBuiltin.1("$", a13);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L207() else L206(dr26);
  L206(a15):
    r137 = `$`(a15, <sym value>);
    goto L204(r137);
  L132(i39, totCounts5, dx9):
    r85 = `+`(totCounts5, dx9);
    st totCounts = r85;
    f2 = ldf f;
    check L136() else D37();
  L133():
    dr8 = tryDispatchBuiltin.1("$", a9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L135() else L134(i35, totCounts1, dr8);
  L134(i37, totCounts3, a11):
    r84 = `$`(a11, <sym counts>);
    goto L132(i37, totCounts3, r84);
  L207():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L204(dx26);
  L208(dx33):
    st a = dx33;
    f3 = ldf f;
    check L212() else D60();
  L209():
    dr28 = tryDispatchBuiltin.0("$<-", l25, dx27);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L211() else L210(dx27, dr28);
  L210(dx29, l27):
    r138 = `$<-`(l27, <sym barrier.value>, dx27);
    goto L208(r138);
  D37():
    deopt 161 [i39];
  D60():
    deopt 264 [];
  L135():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L132(i35, totCounts1, dx8);
  L136():
    p11 = prom<V +>{
      theta11 = ld theta;
      theta12 = force? theta11;
      checkMissing(theta12);
      return theta12;
    };
    ddd4 = ld `...`;
    r87 = dyn f2[, `...`](p11, ddd4);
    check L137() else D38();
  L211():
    dx31 = getTryDispatchBuiltinValue(dr28);
    goto L208(dx31);
  L212():
    p14 = prom<V +>{
      a16 = ld a;
      a17 = force? a16;
      checkMissing(a17);
      c71 = `is.object`(a17);
      if c71 then L1() else L2(a17);
    L0(dx35):
      return dx35;
    L1():
      dr30 = tryDispatchBuiltin.1("$", a17);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(a19):
      r139 = `$`(a19, <sym par>);
      goto L0(r139);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx34);
    };
    ddd5 = ld `...`;
    r141 = dyn f3[, `...`](p14, ddd5);
    check L213() else D61();
  D38():
    deopt 164 [i39, r87];
  D61():
    deopt 267 [r141];
  L137():
    st obj = r87;
    s_mu = ld `s.mu`;
    check L138() else D39();
  L213():
    l28 = ld a;
    c72 = `is.object`(l28);
    if c72 then L215() else L216(r141, l28);
  D39():
    deopt 166 [i39, s_mu];
  L138():
    s_mu1 = force? s_mu;
    checkMissing(s_mu1);
    obj2 = ld obj;
    check L139() else D40();
  L214(dx37):
    st a = dx37;
    a20 = ld a;
    check L218() else D62();
  L215():
    dr32 = tryDispatchBuiltin.0("$<-", l28, r141);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L217() else L216(r141, dr32);
  L216(r143, l30):
    r146 = `$<-`(l30, <sym value>, r141);
    goto L214(r146);
  D40():
    deopt 167 [i39, s_mu1, obj2];
  D62():
    deopt 271 [a20];
  L139():
    obj3 = force? obj2;
    checkMissing(obj3);
    r88 = `*`(s_mu1, obj3);
    s_mu2 = ld `s.mu`;
    check L140() else D41();
  L217():
    dx36 = getTryDispatchBuiltinValue(dr32);
    goto L214(dx36);
  L218():
    a21 = force? a20;
    checkMissing(a21);
    c73 = `is.object`(a21);
    if c73 then L220() else L221(a21);
  D41():
    deopt 169 [i39, r88, s_mu2];
  L140():
    s_mu3 = force? s_mu2;
    checkMissing(s_mu3);
    obj_old = ld `obj.old`;
    check L141() else D42();
  L219(dx39):
    a24 = ld a;
    check L223() else D63();
  L220():
    dr34 = tryDispatchBuiltin.1("$", a21);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L222() else L221(dr34);
  L221(a23):
    r147 = `$`(a23, <sym barrier.value>);
    goto L219(r147);
  D42():
    deopt 170 [i39, r88, s_mu3, obj_old];
  D63():
    deopt 273 [dx39, a24];
  L141():
    obj_old1 = force? obj_old;
    checkMissing(obj_old1);
    r89 = `*`(s_mu3, obj_old1);
    r90 = `>`(r88, r89);
    c45 = `as.logical`(r90);
    if c45 then L142() else L32();
  L222():
    dx38 = getTryDispatchBuiltinValue(dr34);
    goto L219(dx38);
  L223():
    a25 = force? a24;
    checkMissing(a25);
    c74 = `is.object`(a25);
    if c74 then L225() else L226(dx39, a25);
  L32():
    goto L22(i39);
  L142():
    goto L30();
  L224(dx44, dx45):
    r149 = `-`(dx44, dx45);
    l31 = ld a;
    c75 = `is.object`(l31);
    if c75 then L229() else L230(r149, l31);
  L225():
    dr36 = tryDispatchBuiltin.1("$", a25);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L227() else L226(dx39, dr36);
  L226(dx41, a27):
    r148 = `$`(a27, <sym value>);
    goto L224(dx41, r148);
  L227():
    dx43 = getTryDispatchBuiltinValue(dr36);
    goto L224(dx39, dx43);
  L228(dx47):
    st a = dx47;
    a28 = ld a;
    check L232() else D64();
  L229():
    dr38 = tryDispatchBuiltin.0("$<-", l31, r149);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L231() else L230(r149, dr38);
  L230(r151, l33):
    r154 = `$<-`(l33, <sym barrier.value>, r149);
    goto L228(r154);
  D64():
    deopt 280 [a28];
  L231():
    dx46 = getTryDispatchBuiltinValue(dr38);
    goto L228(dx46);
  L232():
    a29 = force? a28;
    checkMissing(a29);
    popenv;
    return a29;
  }
}
fun inner1589173713(theta, `theta.old`, `...`) {
  (reg theta:*, reg theta_old:*, reg ddd:dots) -+> V { var theta:*, var `theta.old`:*, var `...`:dots?, reg ui:*, reg ui1:V, reg theta1:*, reg theta2:V, reg ___:cls, reg r:V, reg ui_theta:*, reg ui_theta1:V, reg ci:*, reg ci1:V, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg gi:*, reg gi1:V, reg r4:V, reg any:cls, reg r5:V, reg c:L, reg ui2:*, reg ui3:V, reg theta_old1:*, reg theta_old2:V, reg ___1:cls, reg r8:V, reg ci2:*, reg ci3:V, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg gi_old:*, reg gi_old1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg gi_old4:V, reg r13:V, reg gi2:*, reg gi3:V, reg r14:V, reg r15:V, reg ui_theta2:*, reg ui_theta3:V, reg r16:V, reg sum:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg bar:*, reg bar1:V, reg is_finite:cls, reg r20:V, reg r21:V, reg c1:L, reg f:cls, reg theta3:*, reg theta4:V, reg p:p(V +), reg ddd1:dots?, reg r24:V, reg mu:*, reg mu1:V, reg bar2:*, reg bar3:V, reg r25:V, reg r26:V |
    mkenv;
    st theta = theta;
    st `theta.old` = theta_old;
    st `...` = ddd;
    ui = ld ui;
    check L8() else D0();
  D0():
    deopt 1 [ui];
  L8():
    ui1 = force? ui;
    checkMissing(ui1);
    theta1 = ld theta;
    check L9() else D1();
  D1():
    deopt 3 [theta1];
  L9():
    theta2 = force? theta1;
    checkMissing(theta2);
    ___ = ldf `%*%` in base;
    r = dyn ___(ui1, theta2);
    check L10() else D2();
  D2():
    deopt 6 [r];
  L10():
    st `ui.theta` = r;
    ui_theta = ld `ui.theta`;
    check L11() else D3();
  D3():
    deopt 8 [ui_theta];
  L11():
    ui_theta1 = force? ui_theta;
    checkMissing(ui_theta1);
    ci = ld ci;
    check L12() else D4();
  D4():
    deopt 9 [ui_theta1, ci];
  L12():
    ci1 = force? ci;
    checkMissing(ci1);
    r1 = `-`(ui_theta1, ci1);
    st gi = r1;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r3):
    c = `as.logical`(r3);
    if c then L17() else L1();
  L13():
    gi = ld gi;
    check L15() else D5();
  L14():
    r2 = dyn base(<lang `<`(gi, 0.0)>);
    goto L0(r2);
  D5():
    deopt 15 [gi];
  L1():
    ui2 = ld ui;
    check L20() else D7();
  L15():
    gi1 = force? gi;
    checkMissing(gi1);
    r4 = `<`(gi1, 0.0);
    any = ldf any in base;
    r5 = dyn any(r4);
    check L16() else D6();
  L17():
    popenv;
    return NA_REAL;
  D6():
    deopt 20 [r5];
  D7():
    deopt 27 [ui2];
  L16():
    goto L0(r5);
  L20():
    ui3 = force? ui2;
    checkMissing(ui3);
    theta_old1 = ld `theta.old`;
    check L21() else D8();
  D8():
    deopt 29 [theta_old1];
  L21():
    theta_old2 = force? theta_old1;
    checkMissing(theta_old2);
    ___1 = ldf `%*%` in base;
    r8 = dyn ___1(ui3, theta_old2);
    check L22() else D9();
  D9():
    deopt 32 [r8];
  L22():
    ci2 = ld ci;
    check L23() else D10();
  D10():
    deopt 32 [r8, ci2];
  L23():
    ci3 = force? ci2;
    checkMissing(ci3);
    r9 = `-`(r8, ci3);
    st `gi.old` = r9;
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L3(r11):
    st bar = r11;
    sym3 = ldf `is.finite`;
    base3 = ldf `is.finite` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L24():
    gi_old = ld `gi.old`;
    check L26() else D11();
  L25():
    r10 = dyn base1(<lang `-`(`*`(gi.old, log(gi)), ui.theta)>);
    goto L3(r10);
  D11():
    deopt 38 [gi_old];
  L5(r19):
    r21 = `!`(r19);
    c1 = `as.logical`(r21);
    if c1 then L36() else L6();
  L26():
    gi_old1 = force? gi_old;
    checkMissing(gi_old1);
    sym2 = ldf log;
    base2 = ldf log in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L32():
    bar = ld bar;
    check L34() else D15();
  L33():
    r18 = dyn base3(<sym bar>);
    goto L5(r18);
  D15():
    deopt 51 [bar];
  L4(gi_old4, r13):
    r15 = `*`(gi_old4, r13);
    ui_theta2 = ld `ui.theta`;
    check L30() else D13();
  L6():
    goto L7();
  L7():
    f = ldf f;
    check L38() else D17();
  L27():
    gi2 = ld gi;
    check L29() else D12();
  L28():
    r12 = dyn base2(<sym gi>);
    goto L4(gi_old1, r12);
  L34():
    bar1 = force? bar;
    checkMissing(bar1);
    is_finite = ldf `is.finite` in base;
    r20 = dyn is_finite(bar1);
    check L35() else D16();
  L36():
    st bar = -Infinity;
    goto L7();
  D12():
    deopt 40 [gi_old1, gi2];
  D13():
    deopt 43 [r15, ui_theta2];
  D16():
    deopt 54 [r20];
  D17():
    deopt 62 [];
  L29():
    gi3 = force? gi2;
    checkMissing(gi3);
    r14 = log(gi3, 2.718281828459045);
    goto L4(gi_old1, r14);
  L30():
    ui_theta3 = force? ui_theta2;
    checkMissing(ui_theta3);
    r16 = `-`(r15, ui_theta3);
    sum = ldf sum in base;
    r17 = dyn sum(r16);
    check L31() else D14();
  L35():
    goto L5(r20);
  L38():
    p = prom<V +>{
      theta3 = ld theta;
      theta4 = force? theta3;
      checkMissing(theta4);
      return theta4;
    };
    ddd1 = ld `...`;
    r24 = dyn f[, `...`](p, ddd1);
    check L39() else D18();
  D14():
    deopt 47 [r17];
  D18():
    deopt 65 [r24];
  L31():
    goto L3(r17);
  L39():
    mu = ld mu;
    check L40() else D19();
  D19():
    deopt 65 [r24, mu];
  L40():
    mu1 = force? mu;
    checkMissing(mu1);
    bar2 = ld bar;
    check L41() else D20();
  D20():
    deopt 66 [r24, mu1, bar2];
  L41():
    bar3 = force? bar2;
    checkMissing(bar3);
    r25 = `*`(mu1, bar3);
    r26 = `-`(r24, r25);
    popenv;
    return r26;
  }
}
fun inner3391087164(theta, `...`) {
  (reg theta:*, reg ddd:dots) -+> V { var theta:*, var `...`:dots?, reg R:cls, reg theta1:*, reg theta2:V, reg p:p(V +), reg theta_old:*, reg theta_old1:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V |
    mkenv;
    st theta = theta;
    st `...` = ddd;
    R = ldf R;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      theta1 = ld theta;
      theta2 = force? theta1;
      checkMissing(theta2);
      return theta2;
    };
    p1 = prom<V +>{
      theta_old = ld `theta.old`;
      theta_old1 = force? theta_old;
      checkMissing(theta_old1);
      return theta_old1;
    };
    ddd1 = ld `...`;
    r2 = dyn R[, , `...`](p, p1, ddd1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}