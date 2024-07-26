package org.prlprg.ir.cfg.instr;

import org.prlprg.ir.cfg.InstrOutput;
import org.prlprg.ir.cfg.CascadingUpdatedInstrs;
import org.prlprg.ir.cfg.LocalNode;
import org.prlprg.ir.cfg.Node;

/** Thrown when an instruction's output type updates that is an input to another instruction, and
 * the updated output type is no longer a subtype of the input's required type.
 */
public class InputNodeTypeException extends RuntimeException {
  InputNodeTypeException(CascadingUpdatedInstrs cascade, Node<?> actualNode, Class<?> requiredInputType) {
    super("Required " + requiredInputType.getSimpleName() + ", got " + actualNode.type().getSimpleName() + ":\nOffending node = " + actualNode + "\nCascade:\n" + cascade);
  }
}
