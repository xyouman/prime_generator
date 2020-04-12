pipeline {
    agent { docker { image 'python:3.9.0' } }
    stages {
        stage('build') {
            steps {
                bat 'echo "hello world"'
                bat '''
                    echo "test echo 1"
                    echo "test echo 2"
                    '''
            }
        }
    }
}