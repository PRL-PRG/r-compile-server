fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner557573876;
    st system2 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner557573876(command, args, stdout, stderr, stdin, input, env, wait, minimized, invisible, timeout, `receive.console.signals`) {
  (reg command:*, reg args:*, reg stdout:*, reg stderr:*, reg stdin:*, reg input:*, reg env:*, reg wait:*, reg minimized:*, reg invisible:*, reg timeout:*, reg receive_console_signals:*) -+> V { var command:*, var args:*, reg args_isMissing:L, reg args_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var stdout:*, reg stdout_isMissing:L, reg stdout_orDefault:*, var stderr:*, reg stderr_isMissing:L, reg stderr_orDefault:*, var stdin:*, reg stdin_isMissing:L, reg stdin_orDefault:*, var input:*, reg input_isMissing:L, reg input_orDefault:*, var env:*, reg env_isMissing:L, reg env_orDefault:*, reg character1:cls, reg r2:V, reg p1:p(V +), var wait:*, reg wait_isMissing:L, reg wait_orDefault:*, var minimized:*, reg minimized_isMissing:L, reg minimized_orDefault:*, var invisible:*, reg invisible_isMissing:L, reg invisible_orDefault:*, var timeout:*, reg timeout_isMissing:L, reg timeout_orDefault:*, var `receive.console.signals`:*, reg receive_console_signals_isMissing:L, reg receive_console_signals_orDefault:*, reg wait1:*, reg wait2:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg missing:cls, reg r7:V, reg r8:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg c5:L, reg r10:V, reg missing1:cls, reg r11:V, reg r12:V, reg c6:L, reg c7:V, reg c9:L, reg message:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg wait3:*, reg wait4:V, reg c10:L, reg r17:V, reg c11:L, reg c12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg c16:L, reg r19:V, reg wait5:*, reg wait6:V, reg is_na:cls, reg r20:V, reg c17:L, reg c18:V, reg c20:L, reg stop:cls, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg receive_console_signals1:*, reg receive_console_signals2:V, reg c21:L, reg r25:V, reg c22:L, reg c23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg c27:L, reg r27:V, reg receive_console_signals3:*, reg receive_console_signals4:V, reg is_na1:cls, reg r28:V, reg c28:L, reg c29:V, reg c31:L, reg stop1:cls, reg r29:V, reg paste:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg env1:*, reg env2:V, reg shQuote:cls, reg command1:*, reg command2:V, reg p3:p(V +), reg r34:V, reg args1:*, reg args2:V, reg c32:cls, reg r35:V, reg p4:p(V +), reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg stdout1:*, reg stdout2:V, reg c33:V, reg c34:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg r42:V, reg stderr1:*, reg stderr2:V, reg c35:V, reg c36:L, reg isTRUE:cls, reg stderr3:*, reg stderr4:V, reg p5:p(V +), reg r45:V, reg c37:L, reg isTRUE1:cls, reg stdout3:*, reg stdout4:V, reg p6:p(V +), reg r47:V, reg r48:V, reg c38:L, reg warning:cls, reg r49:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r51:V, reg r52:V, reg stdout5:*, reg stdout6:V, reg identical:cls, reg r53:V, reg c39:L, reg paste1:cls, reg command3:*, reg command4:V, reg p7:p(V +), reg r55:V, reg isTRUE2:cls, reg stdout7:*, reg stdout8:V, reg p8:p(V +), reg r58:V, reg c40:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r59:V, reg r60:V, reg stdout9:*, reg stdout10:V, reg c41:L, reg c42:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r61:V, reg r62:V, reg stdout11:*, reg stdout12:V, reg length:cls, reg r63:V, reg r64:V, reg c43:L, reg stop2:cls, reg r65:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r67:V, reg r68:V, reg stdout13:*, reg stdout14:V, reg nzchar:cls, reg r69:V, reg c44:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r70:V, reg r71:V, reg stdout15:*, reg stdout16:V, reg stderr5:*, reg stderr6:V, reg identical1:cls, reg r72:V, reg c45:L, reg paste2:cls, reg command5:*, reg command6:V, reg p9:p(V +), reg shQuote1:cls, reg stdout17:*, reg stdout18:V, reg p10:p(V +), reg r75:V, reg p11:p(V +), reg r77:V, reg r78:V, reg paste3:cls, reg command7:*, reg command8:V, reg p12:p(V +), reg shQuote2:cls, reg stdout19:*, reg stdout20:V, reg p13:p(V +), reg r81:V, reg p14:p(V +), reg r83:V, reg r84:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r85:V, reg r86:V, reg stderr7:*, reg stderr8:V, reg identical2:cls, reg r87:V, reg c46:L, reg paste4:cls, reg command9:*, reg command10:V, reg p15:p(V +), reg r89:V, reg isTRUE3:cls, reg stderr9:*, reg stderr10:V, reg p16:p(V +), reg r92:V, reg c47:L, reg paste5:cls, reg command11:*, reg command12:V, reg p17:p(V +), reg r94:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r95:V, reg r96:V, reg stderr11:*, reg stderr12:V, reg c48:L, reg c49:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r97:V, reg r98:V, reg stderr13:*, reg stderr14:V, reg length1:cls, reg r99:V, reg r100:V, reg c50:L, reg stop3:cls, reg r101:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r103:V, reg r104:V, reg stderr15:*, reg stderr16:V, reg nzchar1:cls, reg r105:V, reg c51:L, reg c53:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r106:V, reg c56:L, reg r107:V, reg stdout21:*, reg stdout22:V, reg stderr17:*, reg stderr18:V, reg identical3:cls, reg r108:V, reg r109:V, reg c57:L, reg c58:V, reg c60:L, reg paste6:cls, reg command13:*, reg command14:V, reg p18:p(V +), reg shQuote3:cls, reg stderr19:*, reg stderr20:V, reg p19:p(V +), reg r112:V, reg p20:p(V +), reg r114:V, reg r115:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r116:V, reg r117:V, reg input1:*, reg input2:V, reg c61:V, reg r118:V, reg c62:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r119:V, reg r120:V, reg input3:*, reg input4:V, reg c63:L, reg r121:V, reg c64:L, reg stop4:cls, reg r122:V, reg tempfile:cls, reg r124:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r125:V, reg on_exit:cls, reg r127:V, reg writeLines:cls, reg input5:*, reg input6:V, reg p21:p(V +), reg f:*, reg f1:V, reg p22:p(V +), reg r130:V, reg paste7:cls, reg command15:*, reg command16:V, reg p23:p(V +), reg shQuote4:cls, reg f2:*, reg f3:V, reg p24:p(V +), reg r133:V, reg p25:p(V +), reg r135:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r137:V, reg r138:V, reg stdin1:*, reg stdin2:V, reg nzchar2:cls, reg r139:V, reg c65:L, reg paste8:cls, reg command17:*, reg command18:V, reg p26:p(V +), reg shQuote5:cls, reg stdin3:*, reg stdin4:V, reg p27:p(V +), reg r142:V, reg p28:p(V +), reg r144:V, reg wait7:*, reg wait8:V, reg r145:V, reg c66:L, reg c68:V, reg intern:*, reg intern1:V, reg r146:V, reg c69:L, reg c70:V, reg c72:L, reg paste9:cls, reg command19:*, reg command20:V, reg p29:p(V +), reg r148:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r150:V, reg r151:V, reg command21:*, reg command22:V, reg intern2:*, reg intern3:V, reg timeout1:*, reg timeout2:V, reg receive_console_signals5:*, reg receive_console_signals6:V, reg system:cls, reg r152:V |
    mkenv;
    st command = command;
    args_isMissing = missing.0(args);
    if args_isMissing then L0() else L1(args);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(args_orDefault):
    st args = args_orDefault;
    stdout_isMissing = missing.0(stdout);
    if stdout_isMissing then L2("") else L2(stdout);
  L2(stdout_orDefault):
    st stdout = stdout_orDefault;
    stderr_isMissing = missing.0(stderr);
    if stderr_isMissing then L3("") else L3(stderr);
  L3(stderr_orDefault):
    st stderr = stderr_orDefault;
    stdin_isMissing = missing.0(stdin);
    if stdin_isMissing then L4("") else L4(stdin);
  L4(stdin_orDefault):
    st stdin = stdin_orDefault;
    input_isMissing = missing.0(input);
    if input_isMissing then L5(NULL) else L5(input);
  L5(input_orDefault):
    st input = input_orDefault;
    env_isMissing = missing.0(env);
    if env_isMissing then L6() else L7(env);
  L6():
    p1 = prom<V +>{
      character1 = ldf character;
      r2 = dyn character1();
      return r2;
    };
    goto L7(p1);
  L7(env_orDefault):
    st env = env_orDefault;
    wait_isMissing = missing.0(wait);
    if wait_isMissing then L8(TRUE) else L8(wait);
  L8(wait_orDefault):
    st wait = wait_orDefault;
    minimized_isMissing = missing.0(minimized);
    if minimized_isMissing then L9(FALSE) else L9(minimized);
  L9(minimized_orDefault):
    st minimized = minimized_orDefault;
    invisible_isMissing = missing.0(invisible);
    if invisible_isMissing then L10(TRUE) else L10(invisible);
  L10(invisible_orDefault):
    st invisible = invisible_orDefault;
    timeout_isMissing = missing.0(timeout);
    if timeout_isMissing then L11(0.0) else L11(timeout);
  L11(timeout_orDefault):
    st timeout = timeout_orDefault;
    receive_console_signals_isMissing = missing.0(receive_console_signals);
    if receive_console_signals_isMissing then L12() else L13(receive_console_signals);
  L12():
    p2 = prom<V +>{
      wait1 = ld wait;
      wait2 = force? wait1;
      checkMissing(wait2);
      return wait2;
    };
    goto L13(p2);
  L13(receive_console_signals_orDefault):
    st `receive.console.signals` = receive_console_signals_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L80() else L81();
  L14(r6):
    r8 = `!`(r6);
    c = `as.logical`(r8);
    if c then L15(c) else L82();
  L80():
    missing = ldf missing in base;
    r7 = dyn missing(<sym minimized>);
    goto L14(r7);
  L81():
    r5 = dyn base(<sym minimized>);
    goto L14(r5);
  L15(c1):
    c9 = `as.logical`(c1);
    if c9 then L86() else L17();
  L82():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L83() else L84();
  L16(c5, r10):
    r12 = `!`(r10);
    c6 = `as.logical`(r12);
    c7 = `||`(c5, c6);
    goto L15(c7);
  L17():
    goto L18();
  L18():
    sym2 = ldf `is.logical`;
    base2 = ldf `is.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L90() else L91();
  L83():
    missing1 = ldf missing in base;
    r11 = dyn missing1(<sym invisible>);
    goto L16(c, r11);
  L84():
    r9 = dyn base1(<sym invisible>);
    goto L16(c, r9);
  L86():
    message = ldf message;
    check L87() else D0();
  D0():
    deopt 10 [];
  L19(r16):
    r17 = `!`(r16);
    c11 = `as.logical`(r17);
    if c11 then L20(c11) else L93();
  L87():
    r13 = dyn message("arguments 'minimized' and 'invisible' are for Windows only");
    check L88() else D1();
  L90():
    wait3 = ld wait;
    check L92() else D2();
  L91():
    r15 = dyn base2(<sym wait>);
    goto L19(r15);
  D1():
    deopt 12 [r13];
  D2():
    deopt 16 [wait3];
  L20(c12):
    c20 = `as.logical`(c12);
    if c20 then L99() else L22();
  L88():
    goto L18();
  L92():
    wait4 = force? wait3;
    checkMissing(wait4);
    c10 = `is.logical`(wait4);
    goto L19(c10);
  L93():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L94() else L95();
  L21(c16, r19):
    c17 = `as.logical`(r19);
    c18 = `||`(c16, c17);
    goto L20(c18);
  L22():
    goto L23();
  L23():
    sym4 = ldf `is.logical`;
    base4 = ldf `is.logical` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L103() else L104();
  L94():
    wait5 = ld wait;
    check L96() else D3();
  L95():
    r18 = dyn base3(<sym wait>);
    goto L21(c11, r18);
  L99():
    stop = ldf stop;
    check L100() else D5();
  D3():
    deopt 22 [c11, wait5];
  D5():
    deopt 28 [];
  L24(r24):
    r25 = `!`(r24);
    c22 = `as.logical`(r25);
    if c22 then L25(c22) else L106();
  L96():
    wait6 = force? wait5;
    checkMissing(wait6);
    is_na = ldf `is.na` in base;
    r20 = dyn is_na(wait6);
    check L97() else D4();
  L100():
    r21 = dyn stop("'wait' must be TRUE or FALSE");
    check L101() else D6();
  L103():
    receive_console_signals1 = ld `receive.console.signals`;
    check L105() else D7();
  L104():
    r23 = dyn base4(<sym receive.console.signals>);
    goto L24(r23);
  D4():
    deopt 25 [c11, r20];
  D6():
    deopt 30 [r21];
  D7():
    deopt 34 [receive_console_signals1];
  L25(c23):
    c31 = `as.logical`(c23);
    if c31 then L112() else L27();
  L97():
    goto L21(c11, r20);
  L101():
    goto L23();
  L105():
    receive_console_signals2 = force? receive_console_signals1;
    checkMissing(receive_console_signals2);
    c21 = `is.logical`(receive_console_signals2);
    goto L24(c21);
  L106():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L107() else L108();
  L26(c27, r27):
    c28 = `as.logical`(r27);
    c29 = `||`(c27, c28);
    goto L25(c29);
  L27():
    goto L28();
  L28():
    st intern = FALSE;
    paste = ldf paste;
    check L116() else D12();
  L107():
    receive_console_signals3 = ld `receive.console.signals`;
    check L109() else D8();
  L108():
    r26 = dyn base5(<sym receive.console.signals>);
    goto L26(c22, r26);
  L112():
    stop1 = ldf stop;
    check L113() else D10();
  D8():
    deopt 40 [c22, receive_console_signals3];
  D10():
    deopt 46 [];
  D12():
    deopt 55 [];
  L109():
    receive_console_signals4 = force? receive_console_signals3;
    checkMissing(receive_console_signals4);
    is_na1 = ldf `is.na` in base;
    r28 = dyn is_na1(receive_console_signals4);
    check L110() else D9();
  L113():
    r29 = dyn stop1("'receive.console.signals' must be TRUE or FALSE");
    check L114() else D11();
  L116():
    p4 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      shQuote = ldf shQuote;
      p3 = prom<V +>{
        command1 = ld command;
        command2 = force? command1;
        checkMissing(command2);
        return command2;
      };
      r34 = dyn shQuote(p3);
      args1 = ld args;
      args2 = force? args1;
      checkMissing(args2);
      c32 = ldf c in base;
      r35 = dyn c32(env2, r34, args2);
      goto L0(r35);
    L2():
      r31 = dyn base6(<sym env>, <lang shQuote(command)>, <sym args>);
      goto L0(r31);
    };
    r37 = dyn paste[, collapse](p4, " ");
    check L117() else D13();
  D9():
    deopt 43 [c22, r28];
  D11():
    deopt 48 [r29];
  D13():
    deopt 59 [r37];
  L110():
    goto L26(c22, r28);
  L114():
    goto L28();
  L117():
    st command = r37;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L118() else L119();
  L29(r39):
    c34 = `as.logical`(r39);
    if c34 then L121() else L30();
  L118():
    stdout1 = ld stdout;
    check L120() else D14();
  L119():
    r38 = dyn base7(<sym stdout>);
    goto L29(r38);
  D14():
    deopt 62 [stdout1];
  L30():
    goto L31();
  L31():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L123() else L124();
  L120():
    stdout2 = force? stdout1;
    checkMissing(stdout2);
    c33 = `==`(stdout2, NULL);
    goto L29(c33);
  L121():
    st stdout = FALSE;
    goto L31();
  L32(r42):
    c36 = `as.logical`(r42);
    if c36 then L126() else L33();
  L123():
    stderr1 = ld stderr;
    check L125() else D15();
  L124():
    r41 = dyn base8(<sym stderr>);
    goto L32(r41);
  D15():
    deopt 71 [stderr1];
  L33():
    isTRUE = ldf isTRUE;
    check L128() else D16();
  L34():
    sym9 = ldf identical;
    base9 = ldf identical in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L138() else L139();
  L125():
    stderr2 = force? stderr1;
    checkMissing(stderr2);
    c35 = `==`(stderr2, NULL);
    goto L32(c35);
  L126():
    st stderr = FALSE;
    goto L34();
  D16():
    deopt 78 [];
  L38(r52):
    c39 = `as.logical`(r52);
    if c39 then L142() else L39();
  L128():
    p5 = prom<V +>{
      stderr3 = ld stderr;
      stderr4 = force? stderr3;
      checkMissing(stderr4);
      return stderr4;
    };
    r45 = dyn isTRUE(p5);
    check L129() else D17();
  L138():
    stdout5 = ld stdout;
    check L140() else D22();
  L139():
    r51 = dyn base9(<sym stdout>, FALSE);
    goto L38(r51);
  D17():
    deopt 80 [r45];
  D22():
    deopt 99 [stdout5];
  L39():
    isTRUE2 = ldf isTRUE;
    check L146() else D26();
  L40():
    sym14 = ldf identical;
    base14 = ldf identical in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L180() else L181();
  L129():
    c37 = `as.logical`(r45);
    if c37 then L130() else L35();
  L140():
    stdout6 = force? stdout5;
    checkMissing(stdout6);
    identical = ldf identical in base;
    r53 = dyn identical(stdout6, FALSE, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L141() else D23();
  L142():
    paste1 = ldf paste;
    check L143() else D24();
  D23():
    deopt 110 [r53];
  D24():
    deopt 112 [];
  D26():
    deopt 118 [];
  L35():
    goto L34();
  L53(r86):
    c46 = `as.logical`(r86);
    if c46 then L184() else L54();
  L130():
    isTRUE1 = ldf isTRUE;
    check L131() else D18();
  L141():
    goto L38(r53);
  L143():
    p7 = prom<V +>{
      command3 = ld command;
      command4 = force? command3;
      checkMissing(command4);
      return command4;
    };
    r55 = dyn paste1(p7, ">/dev/null");
    check L144() else D25();
  L146():
    p8 = prom<V +>{
      stdout7 = ld stdout;
      stdout8 = force? stdout7;
      checkMissing(stdout8);
      return stdout8;
    };
    r58 = dyn isTRUE2(p8);
    check L147() else D27();
  L180():
    stderr7 = ld stderr;
    check L182() else D42();
  L181():
    r85 = dyn base14(<sym stderr>, FALSE);
    goto L53(r85);
  D18():
    deopt 82 [];
  D25():
    deopt 115 [r55];
  D27():
    deopt 120 [r58];
  D42():
    deopt 183 [stderr7];
  L54():
    isTRUE3 = ldf isTRUE;
    check L188() else D46();
  L55():
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L222() else L223();
  L131():
    p6 = prom<V +>{
      stdout3 = ld stdout;
      stdout4 = force? stdout3;
      checkMissing(stdout4);
      return stdout4;
    };
    r47 = dyn isTRUE1(p6);
    check L132() else D19();
  L144():
    st command = r55;
    goto L40();
  L147():
    c40 = `as.logical`(r58);
    if c40 then L148() else L41();
  L182():
    stderr8 = force? stderr7;
    checkMissing(stderr8);
    identical2 = ldf identical in base;
    r87 = dyn identical2(stderr8, FALSE, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L183() else D43();
  L184():
    paste4 = ldf paste;
    check L185() else D44();
  D19():
    deopt 84 [r47];
  D43():
    deopt 194 [r87];
  D44():
    deopt 196 [];
  D46():
    deopt 202 [];
  L41():
    sym10 = ldf `is.character`;
    base10 = ldf `is.character` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L150() else L151();
  L67(r117):
    r118 = `!`(r117);
    c62 = `as.logical`(r118);
    if c62 then L225() else L68();
  L132():
    r48 = `!`(r47);
    c38 = `as.logical`(r48);
    if c38 then L133() else L36();
  L148():
    st intern = TRUE;
    goto L40();
  L183():
    goto L53(r87);
  L185():
    p15 = prom<V +>{
      command9 = ld command;
      command10 = force? command9;
      checkMissing(command10);
      return command10;
    };
    r89 = dyn paste4(p15, "2>/dev/null");
    check L186() else D45();
  L188():
    p16 = prom<V +>{
      stderr9 = ld stderr;
      stderr10 = force? stderr9;
      checkMissing(stderr10);
      return stderr10;
    };
    r92 = dyn isTRUE3(p16);
    check L189() else D47();
  L222():
    input1 = ld input;
    check L224() else D62();
  L223():
    r116 = dyn base19(<sym input>);
    goto L67(r116);
  D45():
    deopt 199 [r89];
  D47():
    deopt 204 [r92];
  D62():
    deopt 264 [input1];
  L36():
    goto L37();
  L37():
    st stdout = TRUE;
    goto L34();
  L42(r60):
    c42 = `as.logical`(r60);
    if c42 then L153() else L43();
  L68():
    sym22 = ldf nzchar;
    base22 = ldf nzchar in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L242() else L243();
  L73():
    wait7 = ld wait;
    check L250() else D76();
  L133():
    warning = ldf warning;
    check L134() else D20();
  L150():
    stdout9 = ld stdout;
    check L152() else D28();
  L151():
    r59 = dyn base10(<sym stdout>);
    goto L42(r59);
  L186():
    st command = r89;
    goto L55();
  L189():
    c47 = `as.logical`(r92);
    if c47 then L190() else L56();
  L224():
    input2 = force? input1;
    checkMissing(input2);
    c61 = `==`(input2, NULL);
    goto L67(c61);
  L225():
    sym20 = ldf `is.character`;
    base20 = ldf `is.character` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L226() else L227();
  D20():
    deopt 87 [];
  D28():
    deopt 125 [stdout9];
  D76():
    deopt 313 [wait7];
  L43():
    goto L40();
  L56():
    sym15 = ldf `is.character`;
    base15 = ldf `is.character` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L194() else L195();
  L69(r120):
    r121 = `!`(r120);
    c64 = `as.logical`(r121);
    if c64 then L229() else L70();
  L74(r138):
    c65 = `as.logical`(r138);
    if c65 then L246() else L75();
  L134():
    r49 = dyn warning("setting stdout = TRUE");
    check L135() else D21();
  L152():
    stdout10 = force? stdout9;
    checkMissing(stdout10);
    c41 = `is.character`(stdout10);
    goto L42(c41);
  L153():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L154() else L155();
  L190():
    paste5 = ldf paste;
    check L191() else D48();
  L226():
    input3 = ld input;
    check L228() else D63();
  L227():
    r119 = dyn base20(<sym input>);
    goto L69(r119);
  L242():
    stdin1 = ld stdin;
    check L244() else D72();
  L243():
    r137 = dyn base22(<sym stdin>);
    goto L74(r137);
  L250():
    wait8 = force? wait7;
    checkMissing(wait8);
    r145 = `!`(wait8);
    c66 = `as.logical`(r145);
    if c66 then L251() else L76(c66);
  D21():
    deopt 89 [r49];
  D48():
    deopt 206 [];
  D63():
    deopt 269 [input3];
  D72():
    deopt 300 [stdin1];
  L44(r62):
    r64 = `!=`(r62, 1);
    c43 = `as.logical`(r64);
    if c43 then L158() else L45();
  L57(r96):
    c49 = `as.logical`(r96);
    if c49 then L197() else L58();
  L70():
    goto L71();
  L71():
    tempfile = ldf tempfile;
    check L233() else D66();
  L75():
    goto L73();
  L76(c68):
    c72 = `as.logical`(c68);
    if c72 then L254() else L77();
  L135():
    goto L37();
  L154():
    stdout11 = ld stdout;
    check L156() else D29();
  L155():
    r61 = dyn base11(<sym stdout>);
    goto L44(r61);
  L191():
    p17 = prom<V +>{
      command11 = ld command;
      command12 = force? command11;
      checkMissing(command12);
      return command12;
    };
    r94 = dyn paste5(p17, "2>&1");
    check L192() else D49();
  L194():
    stderr11 = ld stderr;
    check L196() else D50();
  L195():
    r95 = dyn base15(<sym stderr>);
    goto L57(r95);
  L228():
    input4 = force? input3;
    checkMissing(input4);
    c63 = `is.character`(input4);
    goto L69(c63);
  L229():
    stop4 = ldf stop;
    check L230() else D64();
  L244():
    stdin2 = force? stdin1;
    checkMissing(stdin2);
    nzchar2 = ldf nzchar in base;
    r139 = dyn nzchar2(stdin2);
    check L245() else D73();
  L246():
    paste8 = ldf paste;
    check L247() else D74();
  L251():
    intern = ld intern;
    check L252() else D77();
  D29():
    deopt 130 [stdout11];
  D49():
    deopt 209 [r94];
  D50():
    deopt 212 [stderr11];
  D64():
    deopt 274 [];
  D66():
    deopt 280 [];
  D73():
    deopt 303 [r139];
  D74():
    deopt 305 [];
  D77():
    deopt 316 [c66, intern];
  L45():
    goto L46();
  L46():
    sym12 = ldf nzchar;
    base12 = ldf nzchar in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L162() else L163();
  L58():
    goto L55();
  L77():
    goto L78();
  L78():
    sym23 = ldf `.Internal`;
    base23 = ldf `.Internal` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L258() else L259();
  L156():
    stdout12 = force? stdout11;
    checkMissing(stdout12);
    length = ldf length in base;
    r63 = dyn length(stdout12);
    check L157() else D30();
  L158():
    stop2 = ldf stop;
    check L159() else D31();
  L192():
    st command = r94;
    goto L55();
  L196():
    stderr12 = force? stderr11;
    checkMissing(stderr12);
    c48 = `is.character`(stderr12);
    goto L57(c48);
  L197():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L198() else L199();
  L230():
    r122 = dyn stop4("'input' must be a character vector or 'NULL'");
    check L231() else D65();
  L233():
    r124 = dyn tempfile();
    check L234() else D67();
  L245():
    goto L74(r139);
  L247():
    p26 = prom<V +>{
      command17 = ld command;
      command18 = force? command17;
      checkMissing(command18);
      return command18;
    };
    p28 = prom<V +>{
      shQuote5 = ldf shQuote;
      p27 = prom<V +>{
        stdin3 = ld stdin;
        stdin4 = force? stdin3;
        checkMissing(stdin4);
        return stdin4;
      };
      r142 = dyn shQuote5(p27);
      return r142;
    };
    r144 = dyn paste8(p26, "<", p28);
    check L248() else D75();
  L252():
    intern1 = force? intern;
    checkMissing(intern1);
    r146 = `!`(intern1);
    c69 = `as.logical`(r146);
    c70 = `&&`(c66, c69);
    goto L76(c70);
  L254():
    paste9 = ldf paste;
    check L255() else D78();
  D30():
    deopt 133 [r63];
  D31():
    deopt 137 [];
  D65():
    deopt 276 [r122];
  D67():
    deopt 281 [r124];
  D75():
    deopt 309 [r144];
  D78():
    deopt 321 [];
  L47(r68):
    c44 = `as.logical`(r68);
    if c44 then L166() else L48();
  L59(r98):
    r100 = `!=`(r98, 1);
    c50 = `as.logical`(r100);
    if c50 then L202() else L60();
  L79(r151):
    popenv;
    return r151;
  L157():
    goto L44(r63);
  L159():
    r65 = dyn stop2("'stdout' must be of length 1");
    check L160() else D32();
  L162():
    stdout13 = ld stdout;
    check L164() else D33();
  L163():
    r67 = dyn base12(<sym stdout>);
    goto L47(r67);
  L198():
    stderr13 = ld stderr;
    check L200() else D51();
  L199():
    r97 = dyn base16(<sym stderr>);
    goto L59(r97);
  L231():
    goto L71();
  L234():
    st f = r124;
    sym21 = ldf `on.exit`;
    base21 = ldf `on.exit` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L235() else L236();
  L248():
    st command = r144;
    goto L73();
  L255():
    p29 = prom<V +>{
      command19 = ld command;
      command20 = force? command19;
      checkMissing(command20);
      return command20;
    };
    r148 = dyn paste9(p29, "&");
    check L256() else D79();
  L258():
    command21 = ld command;
    check L260() else D80();
  L259():
    r150 = dyn base23(<lang system(command, intern, timeout, receive.console.signals)>);
    goto L79(r150);
  D32():
    deopt 139 [r65];
  D33():
    deopt 144 [stdout13];
  D51():
    deopt 217 [stderr13];
  D79():
    deopt 324 [r148];
  D80():
    deopt 330 [command21];
  L48():
    goto L52(NULL);
  L52(r84):
    goto L40();
  L60():
    goto L61();
  L61():
    sym17 = ldf nzchar;
    base17 = ldf nzchar in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L206() else L207();
  L72():
    writeLines = ldf writeLines;
    check L237() else D68();
  L160():
    goto L46();
  L164():
    stdout14 = force? stdout13;
    checkMissing(stdout14);
    nzchar = ldf nzchar in base;
    r69 = dyn nzchar(stdout14);
    check L165() else D34();
  L166():
    sym13 = ldf identical;
    base13 = ldf identical in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L167() else L168();
  L200():
    stderr14 = force? stderr13;
    checkMissing(stderr14);
    length1 = ldf length in base;
    r99 = dyn length1(stderr14);
    check L201() else D52();
  L202():
    stop3 = ldf stop;
    check L203() else D53();
  L235():
    on_exit = ldf `on.exit` in base;
    r127 = dyn on_exit(<lang unlink(f)>);
    goto L72();
  L236():
    r125 = dyn base21(<lang unlink(f)>);
    goto L72();
  L256():
    st command = r148;
    goto L78();
  L260():
    command22 = force? command21;
    checkMissing(command22);
    intern2 = ld intern;
    check L261() else D81();
  D34():
    deopt 147 [r69];
  D52():
    deopt 220 [r99];
  D53():
    deopt 224 [];
  D68():
    deopt 287 [];
  D81():
    deopt 332 [intern2];
  L49(r71):
    c45 = `as.logical`(r71);
    if c45 then L172() else L50();
  L62(r104):
    c51 = `as.logical`(r104);
    if c51 then L210() else L63(c51);
  L165():
    goto L47(r69);
  L167():
    stdout15 = ld stdout;
    check L169() else D35();
  L168():
    r70 = dyn base13(<sym stdout>, <sym stderr>);
    goto L49(r70);
  L201():
    goto L59(r99);
  L203():
    r101 = dyn stop3("'stderr' must be of length 1");
    check L204() else D54();
  L206():
    stderr15 = ld stderr;
    check L208() else D55();
  L207():
    r103 = dyn base17(<sym stderr>);
    goto L62(r103);
  L237():
    p21 = prom<V +>{
      input5 = ld input;
      input6 = force? input5;
      checkMissing(input6);
      return input6;
    };
    p22 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r130 = dyn writeLines(p21, p22);
    check L238() else D69();
  L261():
    intern3 = force? intern2;
    checkMissing(intern3);
    timeout1 = ld timeout;
    check L262() else D82();
  D35():
    deopt 150 [stdout15];
  D54():
    deopt 226 [r101];
  D55():
    deopt 231 [stderr15];
  D69():
    deopt 290 [r130];
  D82():
    deopt 334 [timeout1];
  L50():
    paste3 = ldf paste;
    check L176() else D40();
  L51(r78):
    st command = r78;
    goto L52(r78);
  L63(c53):
    c60 = `as.logical`(c53);
    if c60 then L217() else L65();
  L169():
    stdout16 = force? stdout15;
    checkMissing(stdout16);
    stderr5 = ld stderr;
    check L170() else D36();
  L172():
    paste2 = ldf paste;
    check L173() else D38();
  L204():
    goto L61();
  L208():
    stderr16 = force? stderr15;
    checkMissing(stderr16);
    nzchar1 = ldf nzchar in base;
    r105 = dyn nzchar1(stderr16);
    check L209() else D56();
  L210():
    sym18 = ldf identical;
    base18 = ldf identical in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L211() else L212();
  L238():
    paste7 = ldf paste;
    check L239() else D70();
  L262():
    timeout2 = force? timeout1;
    checkMissing(timeout2);
    receive_console_signals5 = ld `receive.console.signals`;
    check L263() else D83();
  D36():
    deopt 152 [stderr5];
  D38():
    deopt 164 [];
  D40():
    deopt 171 [];
  D56():
    deopt 234 [r105];
  D70():
    deopt 292 [];
  D83():
    deopt 336 [receive_console_signals5];
  L64(c56, r107):
    r109 = `!`(r107);
    c57 = `as.logical`(r109);
    c58 = `&&`(c56, c57);
    goto L63(c58);
  L65():
    goto L66(NULL);
  L66(r115):
    goto L55();
  L170():
    stderr6 = force? stderr5;
    checkMissing(stderr6);
    identical1 = ldf identical in base;
    r72 = dyn identical1(stdout16, stderr6, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L171() else D37();
  L173():
    p9 = prom<V +>{
      command5 = ld command;
      command6 = force? command5;
      checkMissing(command6);
      return command6;
    };
    p11 = prom<V +>{
      shQuote1 = ldf shQuote;
      p10 = prom<V +>{
        stdout17 = ld stdout;
        stdout18 = force? stdout17;
        checkMissing(stdout18);
        return stdout18;
      };
      r75 = dyn shQuote1(p10);
      return r75;
    };
    r77 = dyn paste2(p9, ">", p11, "2>&1");
    check L174() else D39();
  L176():
    p12 = prom<V +>{
      command7 = ld command;
      command8 = force? command7;
      checkMissing(command8);
      return command8;
    };
    p14 = prom<V +>{
      shQuote2 = ldf shQuote;
      p13 = prom<V +>{
        stdout19 = ld stdout;
        stdout20 = force? stdout19;
        checkMissing(stdout20);
        return stdout20;
      };
      r81 = dyn shQuote2(p13);
      return r81;
    };
    r83 = dyn paste3(p12, ">", p14);
    check L177() else D41();
  L209():
    goto L62(r105);
  L211():
    stdout21 = ld stdout;
    check L213() else D57();
  L212():
    r106 = dyn base18(<sym stdout>, <sym stderr>);
    goto L64(c51, r106);
  L217():
    paste6 = ldf paste;
    check L218() else D60();
  L239():
    p23 = prom<V +>{
      command15 = ld command;
      command16 = force? command15;
      checkMissing(command16);
      return command16;
    };
    p25 = prom<V +>{
      shQuote4 = ldf shQuote;
      p24 = prom<V +>{
        f2 = ld f;
        f3 = force? f2;
        checkMissing(f3);
        return f3;
      };
      r133 = dyn shQuote4(p24);
      return r133;
    };
    r135 = dyn paste7(p23, "<", p25);
    check L240() else D71();
  L263():
    receive_console_signals6 = force? receive_console_signals5;
    checkMissing(receive_console_signals6);
    system = ldf system in base;
    r152 = dyn system(command22, intern3, timeout2, receive_console_signals6);
    check L264() else D84();
  D37():
    deopt 162 [r72];
  D39():
    deopt 169 [r77];
  D41():
    deopt 175 [r83];
  D57():
    deopt 237 [c51, stdout21];
  D60():
    deopt 253 [];
  D71():
    deopt 296 [r135];
  D84():
    deopt 339 [r152];
  L171():
    goto L49(r72);
  L174():
    goto L51(r77);
  L177():
    goto L51(r83);
  L213():
    stdout22 = force? stdout21;
    checkMissing(stdout22);
    stderr17 = ld stderr;
    check L214() else D58();
  L218():
    p18 = prom<V +>{
      command13 = ld command;
      command14 = force? command13;
      checkMissing(command14);
      return command14;
    };
    p20 = prom<V +>{
      shQuote3 = ldf shQuote;
      p19 = prom<V +>{
        stderr19 = ld stderr;
        stderr20 = force? stderr19;
        checkMissing(stderr20);
        return stderr20;
      };
      r112 = dyn shQuote3(p19);
      return r112;
    };
    r114 = dyn paste6(p18, "2>", p20);
    check L219() else D61();
  L240():
    st command = r135;
    goto L73();
  L264():
    goto L79(r152);
  D58():
    deopt 239 [c51, stderr17];
  D61():
    deopt 257 [r114];
  L214():
    stderr18 = force? stderr17;
    checkMissing(stderr18);
    identical3 = ldf identical in base;
    r108 = dyn identical3(stdout22, stderr18, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L215() else D59();
  L219():
    st command = r114;
    goto L66(r114);
  D59():
    deopt 249 [c51, r108];
  L215():
    goto L64(c51, r108);
  }
}