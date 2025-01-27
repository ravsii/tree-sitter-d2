# Contributing

Thank you for considering contributing to this project. Following these
guidelines will help ensure a smooth and effective contribution process for all
involved.

## Quicklinks

<!--toc:start-->

- [Contributing](#contributing)
  - [Quicklinks](#quicklinks)
  - [Getting Started](#getting-started)
    - [Issues](#issues)
    - [Local development](#local-development)
    - [Pull Requests](#pull-requests)

<!--toc:end-->

## Getting Started

Contributions to this repository are facilitated through Issues and Pull
Requests (PRs). A basic understanding of Git, including concepts such as
merging, rebasing, and forking, is assumed. For those unfamiliar with these
processes, refer to [GitHub’s contribution
guidelines](https://docs.github.com/en/get-started/exploring-projects-on-github/contributing-to-a-project)
for helpful resources.

Contributors are also expected to have read the [Tree-sitter User
Guide](https://tree-sitter.github.io/tree-sitter/index.html) and possess a
foundational understanding of concepts such as "grammar", "rules",
"queries", and built-in functions like `repeat`, `seq`, and `token`.

For contributors new to Tree-sitter, it is encouraged to seek clarification in
relevant Issues to determine what is required for implementation.

### Issues

When encountering an existing Issue related to a specific problem, it is
recommended to add relevant reproduction information to the thread rather than
opening a duplicate. Using reactions, such as thumbs-up emojis, can also signal
to maintainers that an issue is affecting multiple users.

If an issue has been assigned to someone or labeled as `in-progress`, it
indicates that the issue is currently being addressed. Such issues will not
be reassigned unless the assignee becomes inactive.

### Local development

Local development requires the `tree-sitter-cli`. Refer to the [Getting
Started] section of the Tree-sitter documentation for setup instructions.

[Getting started]: https://tree-sitter.github.io/tree-sitter/creating-parsers/1-getting-started.html

The repository includes a `Makefile` with useful commands such as `watch-test`,
which provides a hot-reload-like experience for testing. This allows developers
to focus on coding rather than repeatedly typing `make test` after every
change.

### Pull Requests

Pull Requests (PRs) are welcome and provide an efficient method for integrating
fixes or improvements into the project. To facilitate smooth integration and
review, PRs should adhere to the following guidelines:

Before opening a PR make sure that:

- Ensure the PR is related to an existing Issue.
  - Exceptions can be made for small changes, such as typo fixes in
    documentation.
- Keep the `main` branch of the fork up-to-date and rebase the feature branch
  on top of `main` to maintain a clean Git history.
- Focus on solving one problem per PR, unless addressing multiple closely
  related issues.
- Include unit tests for new functionality.
- Provide a clear description in the PR, if the related Issue is not
  self-explanatory.
- Validate changes to `grammar.js` using the repository’s ESLint configuration,
  if applicable.

The repository follows the ["fork-and-pull" Git
workflow](https://github.com/susam/gitpr):

1. Fork the repository to a personal GitHub account.
2. Clone the forked repository locally.
3. Create a descriptive and succinct branch name.
4. Commit changes to the newly created branch.
5. Adhere to the repository’s formatting and testing guidelines.
6. Push the branch to the forked repository.
7. Open a Pull Request in the original repository, following the PR template to
   facilitate an efficient review process.
