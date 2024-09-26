import XCTest
import SwiftTreeSitter
import TreeSitterD2

final class TreeSitterD2Tests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_d2())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading D2 grammar")
    }
}
