fun main() {
  () -+> V { reg r:cls, reg try:cls, reg system:cls, reg r1:V, reg p:p(V +), reg r3:V, reg try1:cls, reg system1:cls, reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    r = clos inner1789924755;
    st system = r;
    try = ldf try;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      system = ldf system;
      r1 = dyn system[, intern]("who", TRUE);
      return r1;
    };
    r3 = dyn try(p);
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    st t1 = r3;
    try1 = ldf try;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p1 = prom<V +>{
      system1 = ldf system;
      r4 = dyn system1[, intern, `ignore.stderr`]("ls fizzlipuzzli", TRUE, TRUE);
      return r4;
    };
    r6 = dyn try1(p1);
    check L3() else D3();
  D3():
    deopt 11 [r6];
  L3():
    popenv;
    return r6;
  }
}
fun inner1789924755(command, intern, `ignore.stdout`, `ignore.stderr`, wait, input, `show.output.on.console`, minimized, invisible, timeout, `receive.console.signals`) {
  (reg command:*, reg intern:*, reg ignore_stdout:*, reg ignore_stderr:*, reg wait:*, reg input:*, reg show_output_on_console:*, reg minimized:*, reg invisible:*, reg timeout:*, reg receive_console_signals:*) -+> V { var command:*, var intern:*, reg intern_isMissing:L, reg intern_orDefault:*, var `ignore.stdout`:*, reg ignore_stdout_isMissing:L, reg ignore_stdout_orDefault:*, var `ignore.stderr`:*, reg ignore_stderr_isMissing:L, reg ignore_stderr_orDefault:*, var wait:*, reg wait_isMissing:L, reg wait_orDefault:*, var input:*, reg input_isMissing:L, reg input_orDefault:*, var `show.output.on.console`:*, reg show_output_on_console_isMissing:L, reg show_output_on_console_orDefault:*, var minimized:*, reg minimized_isMissing:L, reg minimized_orDefault:*, var invisible:*, reg invisible_isMissing:L, reg invisible_orDefault:*, var timeout:*, reg timeout_isMissing:L, reg timeout_orDefault:*, var `receive.console.signals`:*, reg receive_console_signals_isMissing:L, reg receive_console_signals_orDefault:*, reg wait1:*, reg wait2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg r4:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg missing1:cls, reg r7:V, reg r8:V, reg c6:L, reg c7:V, reg c9:L, reg c10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c14:L, reg r10:V, reg missing2:cls, reg r11:V, reg r12:V, reg c15:L, reg c16:V, reg c18:L, reg message:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg intern1:*, reg intern2:V, reg c19:L, reg r17:V, reg c20:L, reg c21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg c25:L, reg r19:V, reg intern3:*, reg intern4:V, reg is_na:cls, reg r20:V, reg c26:L, reg c27:V, reg c29:L, reg stop:cls, reg r21:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg ignore_stdout1:*, reg ignore_stdout2:V, reg c30:L, reg r25:V, reg c31:L, reg c32:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg c36:L, reg r27:V, reg ignore_stdout3:*, reg ignore_stdout4:V, reg is_na1:cls, reg r28:V, reg c37:L, reg c38:V, reg c40:L, reg stop1:cls, reg r29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r31:V, reg r32:V, reg ignore_stderr1:*, reg ignore_stderr2:V, reg c41:L, reg r33:V, reg c42:L, reg c43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r34:V, reg c47:L, reg r35:V, reg ignore_stderr3:*, reg ignore_stderr4:V, reg is_na2:cls, reg r36:V, reg c48:L, reg c49:V, reg c51:L, reg stop2:cls, reg r37:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r39:V, reg r40:V, reg wait3:*, reg wait4:V, reg c52:L, reg r41:V, reg c53:L, reg c54:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r42:V, reg c58:L, reg r43:V, reg wait5:*, reg wait6:V, reg is_na3:cls, reg r44:V, reg c59:L, reg c60:V, reg c62:L, reg stop3:cls, reg r45:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r47:V, reg r48:V, reg receive_console_signals1:*, reg receive_console_signals2:V, reg c63:L, reg r49:V, reg c64:L, reg c65:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r50:V, reg c69:L, reg r51:V, reg receive_console_signals3:*, reg receive_console_signals4:V, reg is_na4:cls, reg r52:V, reg c70:L, reg c71:V, reg c73:L, reg stop4:cls, reg r53:V, reg ignore_stdout5:*, reg ignore_stdout6:V, reg c74:L, reg paste:cls, reg command1:*, reg command2:V, reg p1:p(V +), reg r56:V, reg ignore_stderr5:*, reg ignore_stderr6:V, reg c75:L, reg paste1:cls, reg command3:*, reg command4:V, reg p2:p(V +), reg r59:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r61:V, reg r62:V, reg input1:*, reg input2:V, reg c76:V, reg r63:V, reg c77:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r64:V, reg r65:V, reg input3:*, reg input4:V, reg c78:L, reg r66:V, reg c79:L, reg stop5:cls, reg r67:V, reg tempfile:cls, reg r69:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r70:V, reg on_exit:cls, reg r72:V, reg writeLines:cls, reg input5:*, reg input6:V, reg p3:p(V +), reg f:*, reg f1:V, reg p4:p(V +), reg r75:V, reg paste2:cls, reg shQuote:cls, reg f2:*, reg f3:V, reg p5:p(V +), reg r77:V, reg p6:p(V +), reg command5:*, reg command6:V, reg p7:p(V +), reg r80:V, reg wait7:*, reg wait8:V, reg r82:V, reg c80:L, reg c82:V, reg intern5:*, reg intern6:V, reg r83:V, reg c83:L, reg c84:V, reg c86:L, reg paste3:cls, reg command7:*, reg command8:V, reg p8:p(V +), reg r85:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r87:V, reg r88:V, reg command9:*, reg command10:V, reg intern7:*, reg intern8:V, reg timeout1:*, reg timeout2:V, reg receive_console_signals5:*, reg receive_console_signals6:V, reg system:cls, reg r89:V |
    mkenv;
    st command = command;
    intern_isMissing = missing.0(intern);
    if intern_isMissing then L0(FALSE) else L0(intern);
  L0(intern_orDefault):
    st intern = intern_orDefault;
    ignore_stdout_isMissing = missing.0(ignore_stdout);
    if ignore_stdout_isMissing then L1(FALSE) else L1(ignore_stdout);
  L1(ignore_stdout_orDefault):
    st `ignore.stdout` = ignore_stdout_orDefault;
    ignore_stderr_isMissing = missing.0(ignore_stderr);
    if ignore_stderr_isMissing then L2(FALSE) else L2(ignore_stderr);
  L2(ignore_stderr_orDefault):
    st `ignore.stderr` = ignore_stderr_orDefault;
    wait_isMissing = missing.0(wait);
    if wait_isMissing then L3(TRUE) else L3(wait);
  L3(wait_orDefault):
    st wait = wait_orDefault;
    input_isMissing = missing.0(input);
    if input_isMissing then L4(NULL) else L4(input);
  L4(input_orDefault):
    st input = input_orDefault;
    show_output_on_console_isMissing = missing.0(show_output_on_console);
    if show_output_on_console_isMissing then L5(TRUE) else L5(show_output_on_console);
  L5(show_output_on_console_orDefault):
    st `show.output.on.console` = show_output_on_console_orDefault;
    minimized_isMissing = missing.0(minimized);
    if minimized_isMissing then L6(FALSE) else L6(minimized);
  L6(minimized_orDefault):
    st minimized = minimized_orDefault;
    invisible_isMissing = missing.0(invisible);
    if invisible_isMissing then L7(TRUE) else L7(invisible);
  L7(invisible_orDefault):
    st invisible = invisible_orDefault;
    timeout_isMissing = missing.0(timeout);
    if timeout_isMissing then L8(0.0) else L8(timeout);
  L8(timeout_orDefault):
    st timeout = timeout_orDefault;
    receive_console_signals_isMissing = missing.0(receive_console_signals);
    if receive_console_signals_isMissing then L9() else L10(receive_console_signals);
  L9():
    p = prom<V +>{
      wait1 = ld wait;
      wait2 = force? wait1;
      checkMissing(wait2);
      return wait2;
    };
    goto L10(p);
  L10(receive_console_signals_orDefault):
    st `receive.console.signals` = receive_console_signals_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L58() else L59();
  L11(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L12(c) else L60();
  L58():
    missing = ldf missing in base;
    r3 = dyn missing(<sym show.output.on.console>);
    goto L11(r3);
  L59():
    r1 = dyn base(<sym show.output.on.console>);
    goto L11(r1);
  L12(c1):
    c9 = `as.logical`(c1);
    if c9 then L14(c9) else L64();
  L60():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L61() else L62();
  L13(c5, r6):
    r8 = `!`(r6);
    c6 = `as.logical`(r8);
    c7 = `||`(c5, c6);
    goto L12(c7);
  L14(c10):
    c18 = `as.logical`(c10);
    if c18 then L68() else L16();
  L61():
    missing1 = ldf missing in base;
    r7 = dyn missing1(<sym minimized>);
    goto L13(c, r7);
  L62():
    r5 = dyn base1(<sym minimized>);
    goto L13(c, r5);
  L64():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L65() else L66();
  L15(c14, r10):
    r12 = `!`(r10);
    c15 = `as.logical`(r12);
    c16 = `||`(c14, c15);
    goto L14(c16);
  L16():
    goto L17();
  L17():
    sym3 = ldf `is.logical`;
    base3 = ldf `is.logical` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L72() else L73();
  L65():
    missing2 = ldf missing in base;
    r11 = dyn missing2(<sym invisible>);
    goto L15(c9, r11);
  L66():
    r9 = dyn base2(<sym invisible>);
    goto L15(c9, r9);
  L68():
    message = ldf message;
    check L69() else D0();
  D0():
    deopt 15 [];
  L18(r16):
    r17 = `!`(r16);
    c20 = `as.logical`(r17);
    if c20 then L19(c20) else L75();
  L69():
    r13 = dyn message("arguments 'show.output.on.console', 'minimized' and 'invisible' are for Windows only");
    check L70() else D1();
  L72():
    intern1 = ld intern;
    check L74() else D2();
  L73():
    r15 = dyn base3(<sym intern>);
    goto L18(r15);
  D1():
    deopt 17 [r13];
  D2():
    deopt 21 [intern1];
  L19(c21):
    c29 = `as.logical`(c21);
    if c29 then L81() else L21();
  L70():
    goto L17();
  L74():
    intern2 = force? intern1;
    checkMissing(intern2);
    c19 = `is.logical`(intern2);
    goto L18(c19);
  L75():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L76() else L77();
  L20(c25, r19):
    c26 = `as.logical`(r19);
    c27 = `||`(c25, c26);
    goto L19(c27);
  L21():
    goto L22();
  L22():
    sym5 = ldf `is.logical`;
    base5 = ldf `is.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L85() else L86();
  L76():
    intern3 = ld intern;
    check L78() else D3();
  L77():
    r18 = dyn base4(<sym intern>);
    goto L20(c20, r18);
  L81():
    stop = ldf stop;
    check L82() else D5();
  D3():
    deopt 27 [c20, intern3];
  D5():
    deopt 33 [];
  L23(r24):
    r25 = `!`(r24);
    c31 = `as.logical`(r25);
    if c31 then L24(c31) else L88();
  L78():
    intern4 = force? intern3;
    checkMissing(intern4);
    is_na = ldf `is.na` in base;
    r20 = dyn is_na(intern4);
    check L79() else D4();
  L82():
    r21 = dyn stop("'intern' must be TRUE or FALSE");
    check L83() else D6();
  L85():
    ignore_stdout1 = ld `ignore.stdout`;
    check L87() else D7();
  L86():
    r23 = dyn base5(<sym ignore.stdout>);
    goto L23(r23);
  D4():
    deopt 30 [c20, r20];
  D6():
    deopt 35 [r21];
  D7():
    deopt 39 [ignore_stdout1];
  L24(c32):
    c40 = `as.logical`(c32);
    if c40 then L94() else L26();
  L79():
    goto L20(c20, r20);
  L83():
    goto L22();
  L87():
    ignore_stdout2 = force? ignore_stdout1;
    checkMissing(ignore_stdout2);
    c30 = `is.logical`(ignore_stdout2);
    goto L23(c30);
  L88():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L89() else L90();
  L25(c36, r27):
    c37 = `as.logical`(r27);
    c38 = `||`(c36, c37);
    goto L24(c38);
  L26():
    goto L27();
  L27():
    sym7 = ldf `is.logical`;
    base7 = ldf `is.logical` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L98() else L99();
  L89():
    ignore_stdout3 = ld `ignore.stdout`;
    check L91() else D8();
  L90():
    r26 = dyn base6(<sym ignore.stdout>);
    goto L25(c31, r26);
  L94():
    stop1 = ldf stop;
    check L95() else D10();
  D8():
    deopt 45 [c31, ignore_stdout3];
  D10():
    deopt 51 [];
  L28(r32):
    r33 = `!`(r32);
    c42 = `as.logical`(r33);
    if c42 then L29(c42) else L101();
  L91():
    ignore_stdout4 = force? ignore_stdout3;
    checkMissing(ignore_stdout4);
    is_na1 = ldf `is.na` in base;
    r28 = dyn is_na1(ignore_stdout4);
    check L92() else D9();
  L95():
    r29 = dyn stop1("'ignore.stdout' must be TRUE or FALSE");
    check L96() else D11();
  L98():
    ignore_stderr1 = ld `ignore.stderr`;
    check L100() else D12();
  L99():
    r31 = dyn base7(<sym ignore.stderr>);
    goto L28(r31);
  D9():
    deopt 48 [c31, r28];
  D11():
    deopt 53 [r29];
  D12():
    deopt 57 [ignore_stderr1];
  L29(c43):
    c51 = `as.logical`(c43);
    if c51 then L107() else L31();
  L92():
    goto L25(c31, r28);
  L96():
    goto L27();
  L100():
    ignore_stderr2 = force? ignore_stderr1;
    checkMissing(ignore_stderr2);
    c41 = `is.logical`(ignore_stderr2);
    goto L28(c41);
  L101():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L102() else L103();
  L30(c47, r35):
    c48 = `as.logical`(r35);
    c49 = `||`(c47, c48);
    goto L29(c49);
  L31():
    goto L32();
  L32():
    sym9 = ldf `is.logical`;
    base9 = ldf `is.logical` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L111() else L112();
  L102():
    ignore_stderr3 = ld `ignore.stderr`;
    check L104() else D13();
  L103():
    r34 = dyn base8(<sym ignore.stderr>);
    goto L30(c42, r34);
  L107():
    stop2 = ldf stop;
    check L108() else D15();
  D13():
    deopt 63 [c42, ignore_stderr3];
  D15():
    deopt 69 [];
  L33(r40):
    r41 = `!`(r40);
    c53 = `as.logical`(r41);
    if c53 then L34(c53) else L114();
  L104():
    ignore_stderr4 = force? ignore_stderr3;
    checkMissing(ignore_stderr4);
    is_na2 = ldf `is.na` in base;
    r36 = dyn is_na2(ignore_stderr4);
    check L105() else D14();
  L108():
    r37 = dyn stop2("'ignore.stderr' must be TRUE or FALSE");
    check L109() else D16();
  L111():
    wait3 = ld wait;
    check L113() else D17();
  L112():
    r39 = dyn base9(<sym wait>);
    goto L33(r39);
  D14():
    deopt 66 [c42, r36];
  D16():
    deopt 71 [r37];
  D17():
    deopt 75 [wait3];
  L34(c54):
    c62 = `as.logical`(c54);
    if c62 then L120() else L36();
  L105():
    goto L30(c42, r36);
  L109():
    goto L32();
  L113():
    wait4 = force? wait3;
    checkMissing(wait4);
    c52 = `is.logical`(wait4);
    goto L33(c52);
  L114():
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L115() else L116();
  L35(c58, r43):
    c59 = `as.logical`(r43);
    c60 = `||`(c58, c59);
    goto L34(c60);
  L36():
    goto L37();
  L37():
    sym11 = ldf `is.logical`;
    base11 = ldf `is.logical` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L124() else L125();
  L115():
    wait5 = ld wait;
    check L117() else D18();
  L116():
    r42 = dyn base10(<sym wait>);
    goto L35(c53, r42);
  L120():
    stop3 = ldf stop;
    check L121() else D20();
  D18():
    deopt 81 [c53, wait5];
  D20():
    deopt 87 [];
  L38(r48):
    r49 = `!`(r48);
    c64 = `as.logical`(r49);
    if c64 then L39(c64) else L127();
  L117():
    wait6 = force? wait5;
    checkMissing(wait6);
    is_na3 = ldf `is.na` in base;
    r44 = dyn is_na3(wait6);
    check L118() else D19();
  L121():
    r45 = dyn stop3("'wait' must be TRUE or FALSE");
    check L122() else D21();
  L124():
    receive_console_signals1 = ld `receive.console.signals`;
    check L126() else D22();
  L125():
    r47 = dyn base11(<sym receive.console.signals>);
    goto L38(r47);
  D19():
    deopt 84 [c53, r44];
  D21():
    deopt 89 [r45];
  D22():
    deopt 93 [receive_console_signals1];
  L39(c65):
    c73 = `as.logical`(c65);
    if c73 then L133() else L41();
  L118():
    goto L35(c53, r44);
  L122():
    goto L37();
  L126():
    receive_console_signals2 = force? receive_console_signals1;
    checkMissing(receive_console_signals2);
    c63 = `is.logical`(receive_console_signals2);
    goto L38(c63);
  L127():
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L128() else L129();
  L40(c69, r51):
    c70 = `as.logical`(r51);
    c71 = `||`(c69, c70);
    goto L39(c71);
  L41():
    goto L42();
  L42():
    ignore_stdout5 = ld `ignore.stdout`;
    check L137() else D27();
  L128():
    receive_console_signals3 = ld `receive.console.signals`;
    check L130() else D23();
  L129():
    r50 = dyn base12(<sym receive.console.signals>);
    goto L40(c64, r50);
  L133():
    stop4 = ldf stop;
    check L134() else D25();
  D23():
    deopt 99 [c64, receive_console_signals3];
  D25():
    deopt 105 [];
  D27():
    deopt 110 [ignore_stdout5];
  L130():
    receive_console_signals4 = force? receive_console_signals3;
    checkMissing(receive_console_signals4);
    is_na4 = ldf `is.na` in base;
    r52 = dyn is_na4(receive_console_signals4);
    check L131() else D24();
  L134():
    r53 = dyn stop4("'receive.console.signals' must be TRUE or FALSE");
    check L135() else D26();
  L137():
    ignore_stdout6 = force? ignore_stdout5;
    checkMissing(ignore_stdout6);
    c74 = `as.logical`(ignore_stdout6);
    if c74 then L138() else L43();
  D24():
    deopt 102 [c64, r52];
  D26():
    deopt 107 [r53];
  L43():
    goto L44();
  L44():
    ignore_stderr5 = ld `ignore.stderr`;
    check L142() else D30();
  L131():
    goto L40(c64, r52);
  L135():
    goto L42();
  L138():
    paste = ldf paste;
    check L139() else D28();
  D28():
    deopt 113 [];
  D30():
    deopt 120 [ignore_stderr5];
  L139():
    p1 = prom<V +>{
      command1 = ld command;
      command2 = force? command1;
      checkMissing(command2);
      return command2;
    };
    r56 = dyn paste(p1, ">/dev/null");
    check L140() else D29();
  L142():
    ignore_stderr6 = force? ignore_stderr5;
    checkMissing(ignore_stderr6);
    c75 = `as.logical`(ignore_stderr6);
    if c75 then L143() else L45();
  D29():
    deopt 116 [r56];
  L45():
    goto L46();
  L46():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L147() else L148();
  L140():
    st command = r56;
    goto L44();
  L143():
    paste1 = ldf paste;
    check L144() else D31();
  D31():
    deopt 123 [];
  L47(r62):
    r63 = `!`(r62);
    c77 = `as.logical`(r63);
    if c77 then L150() else L48();
  L144():
    p2 = prom<V +>{
      command3 = ld command;
      command4 = force? command3;
      checkMissing(command4);
      return command4;
    };
    r59 = dyn paste1(p2, "2>/dev/null");
    check L145() else D32();
  L147():
    input1 = ld input;
    check L149() else D33();
  L148():
    r61 = dyn base13(<sym input>);
    goto L47(r61);
  D32():
    deopt 126 [r59];
  D33():
    deopt 131 [input1];
  L48():
    goto L53();
  L53():
    wait7 = ld wait;
    check L167() else D43();
  L145():
    st command = r59;
    goto L46();
  L149():
    input2 = force? input1;
    checkMissing(input2);
    c76 = `==`(input2, NULL);
    goto L47(c76);
  L150():
    sym14 = ldf `is.character`;
    base14 = ldf `is.character` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L151() else L152();
  D43():
    deopt 167 [wait7];
  L49(r65):
    r66 = `!`(r65);
    c79 = `as.logical`(r66);
    if c79 then L154() else L50();
  L151():
    input3 = ld input;
    check L153() else D34();
  L152():
    r64 = dyn base14(<sym input>);
    goto L49(r64);
  L167():
    wait8 = force? wait7;
    checkMissing(wait8);
    r82 = `!`(wait8);
    c80 = `as.logical`(r82);
    if c80 then L168() else L54(c80);
  D34():
    deopt 136 [input3];
  L50():
    goto L51();
  L51():
    tempfile = ldf tempfile;
    check L158() else D37();
  L54(c82):
    c86 = `as.logical`(c82);
    if c86 then L171() else L55();
  L153():
    input4 = force? input3;
    checkMissing(input4);
    c78 = `is.character`(input4);
    goto L49(c78);
  L154():
    stop5 = ldf stop;
    check L155() else D35();
  L168():
    intern5 = ld intern;
    check L169() else D44();
  D35():
    deopt 141 [];
  D37():
    deopt 147 [];
  D44():
    deopt 170 [c80, intern5];
  L55():
    goto L56();
  L56():
    sym16 = ldf `.Internal`;
    base16 = ldf `.Internal` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L175() else L176();
  L155():
    r67 = dyn stop5("'input' must be a character vector or 'NULL'");
    check L156() else D36();
  L158():
    r69 = dyn tempfile();
    check L159() else D38();
  L169():
    intern6 = force? intern5;
    checkMissing(intern6);
    r83 = `!`(intern6);
    c83 = `as.logical`(r83);
    c84 = `&&`(c80, c83);
    goto L54(c84);
  L171():
    paste3 = ldf paste;
    check L172() else D45();
  D36():
    deopt 143 [r67];
  D38():
    deopt 148 [r69];
  D45():
    deopt 175 [];
  L57(r88):
    popenv;
    return r88;
  L156():
    goto L51();
  L159():
    st f = r69;
    sym15 = ldf `on.exit`;
    base15 = ldf `on.exit` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L160() else L161();
  L172():
    p8 = prom<V +>{
      command7 = ld command;
      command8 = force? command7;
      checkMissing(command8);
      return command8;
    };
    r85 = dyn paste3(p8, "&");
    check L173() else D46();
  L175():
    command9 = ld command;
    check L177() else D47();
  L176():
    r87 = dyn base16(<lang system(command, intern, timeout, receive.console.signals)>);
    goto L57(r87);
  D46():
    deopt 178 [r85];
  D47():
    deopt 184 [command9];
  L52():
    writeLines = ldf writeLines;
    check L162() else D39();
  L160():
    on_exit = ldf `on.exit` in base;
    r72 = dyn on_exit(<lang unlink(f)>);
    goto L52();
  L161():
    r70 = dyn base15(<lang unlink(f)>);
    goto L52();
  L173():
    st command = r85;
    goto L56();
  L177():
    command10 = force? command9;
    checkMissing(command10);
    intern7 = ld intern;
    check L178() else D48();
  D39():
    deopt 154 [];
  D48():
    deopt 186 [intern7];
  L162():
    p3 = prom<V +>{
      input5 = ld input;
      input6 = force? input5;
      checkMissing(input6);
      return input6;
    };
    p4 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r75 = dyn writeLines(p3, p4);
    check L163() else D40();
  L178():
    intern8 = force? intern7;
    checkMissing(intern8);
    timeout1 = ld timeout;
    check L179() else D49();
  D40():
    deopt 157 [r75];
  D49():
    deopt 188 [timeout1];
  L163():
    paste2 = ldf paste;
    check L164() else D41();
  L179():
    timeout2 = force? timeout1;
    checkMissing(timeout2);
    receive_console_signals5 = ld `receive.console.signals`;
    check L180() else D50();
  D41():
    deopt 159 [];
  D50():
    deopt 190 [receive_console_signals5];
  L164():
    p6 = prom<V +>{
      shQuote = ldf shQuote;
      p5 = prom<V +>{
        f2 = ld f;
        f3 = force? f2;
        checkMissing(f3);
        return f3;
      };
      r77 = dyn shQuote(p5);
      return r77;
    };
    p7 = prom<V +>{
      command5 = ld command;
      command6 = force? command5;
      checkMissing(command6);
      return command6;
    };
    r80 = dyn paste2("<", p6, p7);
    check L165() else D42();
  L180():
    receive_console_signals6 = force? receive_console_signals5;
    checkMissing(receive_console_signals6);
    system = ldf system in base;
    r89 = dyn system(command10, intern8, timeout2, receive_console_signals6);
    check L181() else D51();
  D42():
    deopt 163 [r80];
  D51():
    deopt 193 [r89];
  L165():
    st command = r80;
    goto L53();
  L181():
    goto L57(r89);
  }
}